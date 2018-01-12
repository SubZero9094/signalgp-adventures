#ifndef CHANGING_ENVIRONMENT_CONFIG_H
#define CHANGING_ENVIRONMENT_CONFIG_H

#include "config/config.h"
// TODO: Update configs (both what's in here and the descriptions)!
EMP_BUILD_CONFIG( ChangingEnvironmentConfig,
  GROUP(DEFAULT_GROUP, "General Settings"),
  VALUE(DEBUG_MODE, bool, false, "Should we output debug information?"),
  VALUE(RANDOM_SEED, int, -1, "Random number seed (negative value for based on time)"),
  VALUE(POP_SIZE, size_t, 1024, "Total population size."),
  VALUE(GENERATIONS, size_t, 100, "How many generations should we run evolution?"),
  VALUE(EVAL_TIME, size_t, 256, "Agent evaluation time."),
  VALUE(ANCESTOR_FPATH, std::string, "ancestor.gp", "Ancestor program file."),
  GROUP(ENVIRONMENT_GROUP, "Environment settings."),
  VALUE(ENVIRONMENT_STATES, size_t, 8, "Total possible number of environment states."),
  VALUE(ENVIRONMENT_CHG_PROB, double, 0.125, "Probability the environment changes every update during evaluation."),
  GROUP(HARDWARE_GROUP, "Hardware Settings."),
  VALUE(EVENT_DRIVEN, bool, true, "True: event-driven hardware; False: imperative hardware."),
  VALUE(ACTIVE_SENSING, bool, true, "True: event-driven hardware; False: imperative hardware."),
  VALUE(HW_MAX_CORES, size_t, 16, "Max number of hardware cores. i.e. max number of simultaneous threads of execution hardware will support."),
  VALUE(HW_MAX_CALL_DEPTH, size_t, 128, "Max call depth of hardware unit."),
  VALUE(HW_MIN_BIND_THRESH, double, 0.5, "Hardware minimum binding threshold."),
  GROUP(MUTATION_GROUP, "Mutation Settings"),
  VALUE(PROG_MAX_FUNC_CNT, size_t, 32, "Maximum allowed number of functions per program."),
  VALUE(PROG_MAX_FUNC_LEN, size_t, 32, "Maximum instruction count for functions."),
  VALUE(PROG_MAX_ARG_VAL, size_t, 16, "Maximum argument value for instructions."),
  VALUE(PER_BIT__AFFINITY_FLIP_RATE, double, 0.05, "Per-bit mutation rate of affinity bit flips."),
  VALUE(PER_INST__SUB_RATE, double, 0.005, "Per-instruction subsitution mutation rate."),
  VALUE(PER_FUNC__SLIP_RATE, double, 0.05, "Per-function rate of slip mutations."),
  VALUE(PER_FUNC__FUNC_DUP_RATE, double, 0.05, "Per-function rate of function duplications."),
  VALUE(PER_FUNC__FUNC_DEL_RATE, double, 0.05, "Per-function rate of function deletions."),
  GROUP(DATA_GROUP, "Data Collection Settings"),
  VALUE(SYSTEMATICS_INTERVAL, size_t, 100, "Interval to record systematics summary stats."),
  VALUE(POPULATION_INTERVAL, size_t, 100, "Interval to record population summary stats."),
  VALUE(FITNESS_INTERVAL, size_t, 100, "Interval to record fitness summary stats."),
  VALUE(POP_SNAPSHOT_INTERVAL, size_t, 100, "Interval to take a full snapshot of the population."),
  VALUE(DATA_DIRECTORY, std::string, "./", "Location to dump data output."),
  GROUP(RESUME_RUN_GROUP, "Settings for resuming from an existing population."),
  VALUE(RUN_FROM_EXISTING_POP, bool, false, "Should we resume from an existing pop? If so, be sure to specity existing pop directory setting."),
  VALUE(EXISTING_POP_LOC, std::string, "./pop_0", "Location to of existing population."),
  GROUP(ANALYZE_MODE_GROUP, "Settings for analyzing consensus results."),
  VALUE(ANALYZE_MODE, bool, false, "Are we running in analyze mode?"),
  VALUE(ANALYSIS, size_t, 0, "Which analysis should we run?\n0: Analyze a single program, specified by ANALYZE_AGENT_FPATH."),
  VALUE(ANALYZE_AGENT_FPATH, std::string, "ancestor.gp", "Path to single agent program to analzye.")
)

#endif
