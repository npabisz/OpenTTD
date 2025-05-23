/*	see copyright notice in squirrel.h */
#ifndef _SQSTRING_H_
#define _SQSTRING_H_

inline SQHash _hashstr (const SQChar *s, size_t l)
{
		SQHash h = (SQHash)l;  /* seed */
		size_t step = (l>>5)|1;  /* if string is too long, don't hash all its chars */
		for (; l>=step; l-=step)
			h = h ^ ((h<<5)+(h>>2)+(unsigned short)*(s++));
		return h;
}

struct SQString : public SQRefCounted
{
	SQString(const SQChar *news, SQInteger len);
	~SQString(){}
public:
	static SQString *Create(SQSharedState *ss, const SQChar *, SQInteger len = -1 );
	static SQString *Create(SQSharedState *ss, std::string_view str) { return Create(ss, str.data(), str.size()); }
	SQInteger Next(const SQObjectPtr &refpos, SQObjectPtr &outkey, SQObjectPtr &outval);
	void Release() override;
	SQSharedState *_sharedstate;
	SQString *_next; //chain for the string table
	SQInteger _len;
	SQHash _hash;
	SQChar _val[1];
};



#endif //_SQSTRING_H_
