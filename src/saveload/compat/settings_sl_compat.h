/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file settings_sl_compat.h Loading of settings chunks before table headers were added. */

#ifndef SAVELOAD_COMPAT_SETTINGS_H
#define SAVELOAD_COMPAT_SETTINGS_H

#include "../saveload.h"

/** Original field order for _gameopt. */
const SaveLoadCompat _gameopt_sl_compat[] = {
	SLC_VAR("diff_custom"),
	SLC_VAR("diff_level"),
	SLC_VAR("locale.currency"),
	SLC_VAR("units"),
	SLC_VAR("game_creation.town_name"),
	SLC_VAR("game_creation.landscape"),
	SLC_VAR("game_creation.snow_line_height"),
	SLC_NULL(1, SLV_22, SLV_165),
	SLC_NULL(1, SL_MIN_VERSION, SLV_23),
	SLC_VAR("vehicle.road_side"),
};

/** Original field order for _settings. */
const SaveLoadCompat _settings_sl_compat[] = {
	SLC_VAR("difficulty.max_no_competitors"),
	SLC_NULL(1, SLV_97, SLV_110),
	SLC_VAR("difficulty.number_towns"),
	SLC_VAR("difficulty.industry_density"),
	SLC_VAR("difficulty.max_loan"),
	SLC_VAR("difficulty.initial_interest"),
	SLC_VAR("difficulty.vehicle_costs"),
	SLC_VAR("difficulty.competitor_speed"),
	SLC_NULL(1, SLV_97, SLV_110),
	SLC_VAR("difficulty.vehicle_breakdowns"),
	SLC_VAR("difficulty.subsidy_multiplier"),
	SLC_VAR("difficulty.subsidy_duration"),
	SLC_VAR("difficulty.construction_cost"),
	SLC_VAR("difficulty.terrain_type"),
	SLC_VAR("difficulty.quantity_sea_lakes"),
	SLC_VAR("difficulty.economy"),
	SLC_VAR("difficulty.line_reverse_mode"),
	SLC_VAR("difficulty.disasters"),
	SLC_VAR("difficulty.town_council_tolerance"),
	SLC_VAR("diff_level"),
	SLC_VAR("game_creation.town_name"),
	SLC_VAR("game_creation.landscape"),
	SLC_NULL(1, SLV_97, SLV_164),
	SLC_VAR("vehicle.road_side"),
	SLC_VAR("construction.map_height_limit"),
	SLC_VAR("game_creation.heightmap_height"),
	SLC_VAR("construction.build_on_slopes"),
	SLC_VAR("construction.command_pause_level"),
	SLC_VAR("construction.terraform_per_64k_frames"),
	SLC_VAR("construction.terraform_frame_burst"),
	SLC_VAR("construction.clear_per_64k_frames"),
	SLC_VAR("construction.clear_frame_burst"),
	SLC_VAR("construction.tree_per_64k_frames"),
	SLC_VAR("construction.tree_frame_burst"),
	SLC_VAR("construction.autoslope"),
	SLC_VAR("construction.extra_dynamite"),
	SLC_VAR("construction.max_bridge_length"),
	SLC_VAR("construction.max_bridge_height"),
	SLC_VAR("construction.max_tunnel_length"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_159),
	SLC_VAR("construction.train_signal_side"),
	SLC_VAR("station.never_expire_airports"),
	SLC_VAR("economy.town_layout"),
	SLC_VAR("economy.allow_town_roads"),
	SLC_VAR("economy.found_town"),
	SLC_VAR("economy.allow_town_level_crossings"),
	SLC_VAR("economy.town_cargogen_mode"),
	SLC_VAR("linkgraph.recalc_interval"),
	SLC_VAR("linkgraph.recalc_time"),
	SLC_VAR("linkgraph.distribution_pax"),
	SLC_VAR("linkgraph.distribution_mail"),
	SLC_VAR("linkgraph.distribution_armoured"),
	SLC_VAR("linkgraph.distribution_default"),
	SLC_VAR("linkgraph.accuracy"),
	SLC_VAR("linkgraph.demand_distance"),
	SLC_VAR("linkgraph.demand_size"),
	SLC_VAR("linkgraph.short_path_saturation"),
	SLC_VAR("vehicle.train_acceleration_model"),
	SLC_VAR("vehicle.roadveh_acceleration_model"),
	SLC_VAR("vehicle.train_slope_steepness"),
	SLC_VAR("vehicle.roadveh_slope_steepness"),
	SLC_VAR("pf.forbid_90_deg"),
	SLC_VAR("vehicle.max_train_length"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_159),
	SLC_VAR("vehicle.smoke_amount"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_159),
	SLC_VAR("pf.roadveh_queue"),
	SLC_VAR("pf.new_pathfinding_all"),
	SLC_VAR("pf.yapf.ship_use_yapf"),
	SLC_VAR("pf.yapf.road_use_yapf"),
	SLC_VAR("pf.yapf.rail_use_yapf"),
	SLC_VAR("pf.pathfinder_for_trains"),
	SLC_VAR("pf.pathfinder_for_roadvehs"),
	SLC_VAR("pf.pathfinder_for_ships"),
	SLC_VAR("vehicle.never_expire_vehicles"),
	SLC_VAR("vehicle.max_trains"),
	SLC_VAR("vehicle.max_roadveh"),
	SLC_VAR("vehicle.max_aircraft"),
	SLC_VAR("vehicle.max_ships"),
	SLC_VAR("vehicle.servint_ispercent"),
	SLC_VAR("vehicle.servint_trains"),
	SLC_VAR("vehicle.servint_roadveh"),
	SLC_VAR("vehicle.servint_ships"),
	SLC_VAR("vehicle.servint_aircraft"),
	SLC_VAR("order.no_servicing_if_no_breakdowns"),
	SLC_VAR("vehicle.wagon_speed_limits"),
	SLC_VAR("vehicle.disable_elrails"),
	SLC_VAR("vehicle.freight_trains"),
	SLC_NULL(1, SLV_67, SLV_159),
	SLC_VAR("vehicle.plane_speed"),
	SLC_VAR("vehicle.dynamic_engines"),
	SLC_VAR("vehicle.plane_crashes"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_159),
	SLC_VAR("gui.sg_full_load_any"),
	SLC_VAR("order.improved_load"),
	SLC_VAR("order.selectgoods"),
	SLC_VAR("gui.sg_new_nonstop"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_159),
	SLC_VAR("station.station_spread"),
	SLC_VAR("order.serviceathelipad"),
	SLC_VAR("station.modified_catchment"),
	SLC_VAR("station.serve_neutral_industries"),
	SLC_VAR("order.gradual_loading"),
	SLC_VAR("construction.road_stop_on_town_road"),
	SLC_VAR("construction.road_stop_on_competitor_road"),
	SLC_VAR("station.adjacent_stations"),
	SLC_VAR("economy.station_noise_level"),
	SLC_VAR("station.distant_join_stations"),
	SLC_VAR("economy.inflation"),
	SLC_VAR("construction.raw_industry_construction"),
	SLC_VAR("construction.industry_platform"),
	SLC_VAR("economy.multiple_industry_per_town"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_141),
	SLC_VAR("economy.bribe"),
	SLC_VAR("economy.exclusive_rights"),
	SLC_VAR("economy.fund_buildings"),
	SLC_VAR("economy.fund_roads"),
	SLC_VAR("economy.give_money"),
	SLC_VAR("game_creation.snow_line_height"),
	SLC_VAR("game_creation.snow_coverage"),
	SLC_VAR("game_creation.desert_coverage"),
	SLC_NULL(4, SL_MIN_VERSION, SLV_144),
	SLC_VAR("game_creation.starting_year"),
	SLC_NULL(4, SL_MIN_VERSION, SLV_105),
	SLC_VAR("game_creation.ending_year"),
	SLC_VAR("economy.type"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_TABLE_CHUNKS),
	SLC_NULL(1, SLV_TRADING_AGE, SLV_TABLE_CHUNKS),
	SLC_VAR("economy.feeder_payment_share"),
	SLC_VAR("economy.town_growth_rate"),
	SLC_VAR("economy.larger_towns"),
	SLC_VAR("economy.initial_city_size"),
	SLC_VAR("economy.mod_road_rebuild"),
	SLC_NULL(1, SL_MIN_VERSION, SLV_107),
	SLC_VAR("script.settings_profile"),
	SLC_VAR("ai.ai_in_multiplayer"),
	SLC_VAR("ai.ai_disable_veh_train"),
	SLC_VAR("ai.ai_disable_veh_roadveh"),
	SLC_VAR("ai.ai_disable_veh_aircraft"),
	SLC_VAR("ai.ai_disable_veh_ship"),
	SLC_VAR("script.script_max_opcode_till_suspend"),
	SLC_VAR("script.script_max_memory_megabytes"),
	SLC_VAR("vehicle.extend_vehicle_life"),
	SLC_VAR("economy.dist_local_authority"),
	SLC_VAR("pf.reverse_at_signals"),
	SLC_VAR("pf.wait_oneway_signal"),
	SLC_VAR("pf.wait_twoway_signal"),
	SLC_VAR("economy.town_noise_population[0]"),
	SLC_VAR("economy.town_noise_population[1]"),
	SLC_VAR("economy.town_noise_population[2]"),
	SLC_VAR("economy.infrastructure_maintenance"),
	SLC_VAR("pf.wait_for_pbs_path"),
	SLC_VAR("pf.reserve_paths"),
	SLC_VAR("pf.path_backoff_interval"),
	SLC_NULL(3, SL_MIN_VERSION, SLV_REMOVE_OPF),
	SLC_VAR("pf.npf.npf_max_search_nodes"),
	SLC_VAR("pf.npf.npf_rail_firstred_penalty"),
	SLC_VAR("pf.npf.npf_rail_firstred_exit_penalty"),
	SLC_VAR("pf.npf.npf_rail_lastred_penalty"),
	SLC_VAR("pf.npf.npf_rail_station_penalty"),
	SLC_VAR("pf.npf.npf_rail_slope_penalty"),
	SLC_VAR("pf.npf.npf_rail_curve_penalty"),
	SLC_VAR("pf.npf.npf_rail_depot_reverse_penalty"),
	SLC_VAR("pf.npf.npf_rail_pbs_cross_penalty"),
	SLC_VAR("pf.npf.npf_rail_pbs_signal_back_penalty"),
	SLC_VAR("pf.npf.npf_buoy_penalty"),
	SLC_VAR("pf.npf.npf_water_curve_penalty"),
	SLC_VAR("pf.npf.npf_road_curve_penalty"),
	SLC_VAR("pf.npf.npf_crossing_penalty"),
	SLC_VAR("pf.npf.npf_road_drive_through_penalty"),
	SLC_VAR("pf.npf.npf_road_dt_occupied_penalty"),
	SLC_VAR("pf.npf.npf_road_bay_occupied_penalty"),
	SLC_VAR("pf.npf.maximum_go_to_depot_penalty"),
	SLC_VAR("pf.yapf.disable_node_optimization"),
	SLC_VAR("pf.yapf.max_search_nodes"),
	SLC_VAR("pf.yapf.rail_firstred_twoway_eol"),
	SLC_VAR("pf.yapf.rail_firstred_penalty"),
	SLC_VAR("pf.yapf.rail_firstred_exit_penalty"),
	SLC_VAR("pf.yapf.rail_lastred_penalty"),
	SLC_VAR("pf.yapf.rail_lastred_exit_penalty"),
	SLC_VAR("pf.yapf.rail_station_penalty"),
	SLC_VAR("pf.yapf.rail_slope_penalty"),
	SLC_VAR("pf.yapf.rail_curve45_penalty"),
	SLC_VAR("pf.yapf.rail_curve90_penalty"),
	SLC_VAR("pf.yapf.rail_depot_reverse_penalty"),
	SLC_VAR("pf.yapf.rail_crossing_penalty"),
	SLC_VAR("pf.yapf.rail_look_ahead_max_signals"),
	SLC_VAR("pf.yapf.rail_look_ahead_signal_p0"),
	SLC_VAR("pf.yapf.rail_look_ahead_signal_p1"),
	SLC_VAR("pf.yapf.rail_look_ahead_signal_p2"),
	SLC_VAR("pf.yapf.rail_pbs_cross_penalty"),
	SLC_VAR("pf.yapf.rail_pbs_station_penalty"),
	SLC_VAR("pf.yapf.rail_pbs_signal_back_penalty"),
	SLC_VAR("pf.yapf.rail_doubleslip_penalty"),
	SLC_VAR("pf.yapf.rail_longer_platform_penalty"),
	SLC_VAR("pf.yapf.rail_longer_platform_per_tile_penalty"),
	SLC_VAR("pf.yapf.rail_shorter_platform_penalty"),
	SLC_VAR("pf.yapf.rail_shorter_platform_per_tile_penalty"),
	SLC_VAR("pf.yapf.road_slope_penalty"),
	SLC_VAR("pf.yapf.road_curve_penalty"),
	SLC_VAR("pf.yapf.road_crossing_penalty"),
	SLC_VAR("pf.yapf.road_stop_penalty"),
	SLC_VAR("pf.yapf.road_stop_occupied_penalty"),
	SLC_VAR("pf.yapf.road_stop_bay_occupied_penalty"),
	SLC_VAR("pf.yapf.maximum_go_to_depot_penalty"),
	SLC_VAR("pf.yapf.ship_curve45_penalty"),
	SLC_VAR("pf.yapf.ship_curve90_penalty"),
	SLC_VAR("game_creation.land_generator"),
	SLC_VAR("game_creation.oil_refinery_limit"),
	SLC_VAR("game_creation.tgen_smoothness"),
	SLC_VAR("game_creation.variety"),
	SLC_VAR("game_creation.generation_seed"),
	SLC_VAR("game_creation.tree_placer"),
	SLC_VAR("construction.freeform_edges"),
	SLC_VAR("game_creation.water_borders"),
	SLC_VAR("game_creation.custom_town_number"),
	SLC_VAR("construction.extra_tree_placement"),
	SLC_VAR("game_creation.custom_terrain_type"),
	SLC_VAR("game_creation.custom_sea_level"),
	SLC_VAR("game_creation.min_river_length"),
	SLC_VAR("game_creation.river_route_random"),
	SLC_VAR("game_creation.amount_of_rivers"),
	SLC_VAR("locale.currency"),
	SLC_VAR("units"),
	SLC_VAR("locale.units_velocity"),
	SLC_VAR("locale.units_power"),
	SLC_VAR("locale.units_weight"),
	SLC_VAR("locale.units_volume"),
	SLC_VAR("locale.units_force"),
	SLC_VAR("locale.units_height"),
	SLC_VAR("locale.digit_group_separator"),
	SLC_VAR("locale.digit_group_separator_currency"),
	SLC_VAR("locale.digit_decimal_separator"),
	SLC_VAR("game_creation.freely_forests_placement"),
	SLC_VAR("game_creation.freely_oil_placement"),
	SLC_VAR("game_creation.freely_oil_rigs_placement"),
	SLC_VAR("game_creation.freely_farms_placement"),
	SLC_VAR("game_creation.freely_plantations_placement"),
	SLC_VAR("game_creation.freely_water_placement"),
	SLC_VAR("game_creation.freely_lumbermills_placement"),
	SLC_VAR("game_creation.freely_bubble_gen_placement"),
};

#endif /* SAVELOAD_COMPAT_SETTINGS_H */
