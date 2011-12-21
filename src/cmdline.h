/** @file cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.5
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef CMDLINE_H
#define CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE PACKAGE
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#ifdef PACKAGE_NAME
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE_NAME
#else
#define CMDLINE_PARSER_PACKAGE_NAME PACKAGE
#endif
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION VERSION
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *full_help_help; /**< @brief Print help, including hidden options, and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  int refinement_arg;	/**< @brief The number of iteration of the iterative refinment (default='0').  */
  char * refinement_orig;	/**< @brief The number of iteration of the iterative refinment original value given at command line.  */
  const char *refinement_help; /**< @brief The number of iteration of the iterative refinment help description.  */
  float weight_arg;	/**< @brief Weight of the expected accuracy score for secondary structures (default='4.0').  */
  char * weight_orig;	/**< @brief Weight of the expected accuracy score for secondary structures original value given at command line.  */
  const char *weight_help; /**< @brief Weight of the expected accuracy score for secondary structures help description.  */
  float eta_arg;	/**< @brief Initial step width for the subgradient optimization (default='0.5').  */
  char * eta_orig;	/**< @brief Initial step width for the subgradient optimization original value given at command line.  */
  const char *eta_help; /**< @brief Initial step width for the subgradient optimization help description.  */
  int max_iter_arg;	/**< @brief The maximum number of iteration of the subgradient optimization (default='400').  */
  char * max_iter_orig;	/**< @brief The maximum number of iteration of the subgradient optimization original value given at command line.  */
  const char *max_iter_help; /**< @brief The maximum number of iteration of the subgradient optimization help description.  */
  float fourway_pct_arg;	/**< @brief Weight of four-way PCT (default='0.0').  */
  char * fourway_pct_orig;	/**< @brief Weight of four-way PCT original value given at command line.  */
  const char *fourway_pct_help; /**< @brief Weight of four-way PCT help description.  */
  int verbose_arg;	/**< @brief The level of verbose outputs (default='0').  */
  char * verbose_orig;	/**< @brief The level of verbose outputs original value given at command line.  */
  const char *verbose_help; /**< @brief The level of verbose outputs help description.  */
  char * align_model_arg;	/**< @brief Alignment model for calcualating matching probablities (default='ProbCons').  */
  char * align_model_orig;	/**< @brief Alignment model for calcualating matching probablities original value given at command line.  */
  const char *align_model_help; /**< @brief Alignment model for calcualating matching probablities help description.  */
  float align_pct_arg;	/**< @brief Weight of PCT for matching probabilities (default='0.0').  */
  char * align_pct_orig;	/**< @brief Weight of PCT for matching probabilities original value given at command line.  */
  const char *align_pct_help; /**< @brief Weight of PCT for matching probabilities help description.  */
  float align_th_arg;	/**< @brief Threshold for matching probabilities (default='0.01').  */
  char * align_th_orig;	/**< @brief Threshold for matching probabilities original value given at command line.  */
  const char *align_th_help; /**< @brief Threshold for matching probabilities help description.  */
  char * fold_model_arg;	/**< @brief Folding model for calculating base-pairing probablities (default='Boltzmann').  */
  char * fold_model_orig;	/**< @brief Folding model for calculating base-pairing probablities original value given at command line.  */
  const char *fold_model_help; /**< @brief Folding model for calculating base-pairing probablities help description.  */
  float fold_pct_arg;	/**< @brief Weight of PCT for base-pairing probabilities (default='0.0').  */
  char * fold_pct_orig;	/**< @brief Weight of PCT for base-pairing probabilities original value given at command line.  */
  const char *fold_pct_help; /**< @brief Weight of PCT for base-pairing probabilities help description.  */
  float* fold_th_arg;	/**< @brief Threshold for base-pairing probabilities (default='0.2').  */
  char ** fold_th_orig;	/**< @brief Threshold for base-pairing probabilities original value given at command line.  */
  unsigned int fold_th_min; /**< @brief Threshold for base-pairing probabilities's minimum occurreces */
  unsigned int fold_th_max; /**< @brief Threshold for base-pairing probabilities's maximum occurreces */
  const char *fold_th_help; /**< @brief Threshold for base-pairing probabilities help description.  */
  float* gamma_arg;	/**< @brief Specify the threshold for base-pairing probabilities by 1/(gamma+1)).  */
  char ** gamma_orig;	/**< @brief Specify the threshold for base-pairing probabilities by 1/(gamma+1)) original value given at command line.  */
  unsigned int gamma_min; /**< @brief Specify the threshold for base-pairing probabilities by 1/(gamma+1))'s minimum occurreces */
  unsigned int gamma_max; /**< @brief Specify the threshold for base-pairing probabilities by 1/(gamma+1))'s maximum occurreces */
  const char *gamma_help; /**< @brief Specify the threshold for base-pairing probabilities by 1/(gamma+1)) help description.  */
  int use_alifold_flag;	/**< @brief Mix RNAalifold for calculating base-pairing probabilities (default=off).  */
  const char *use_alifold_help; /**< @brief Mix RNAalifold for calculating base-pairing probabilities help description.  */
  float* fold_th1_arg;	/**< @brief Threshold for base-pairing probabilities of the conclusive common secondary structures.  */
  char ** fold_th1_orig;	/**< @brief Threshold for base-pairing probabilities of the conclusive common secondary structures original value given at command line.  */
  unsigned int fold_th1_min; /**< @brief Threshold for base-pairing probabilities of the conclusive common secondary structures's minimum occurreces */
  unsigned int fold_th1_max; /**< @brief Threshold for base-pairing probabilities of the conclusive common secondary structures's maximum occurreces */
  const char *fold_th1_help; /**< @brief Threshold for base-pairing probabilities of the conclusive common secondary structures help description.  */
  float* gamma1_arg;	/**< @brief Specify the threshold for base-pairing probabilities of the conclusive common secondary structuresby 1/(gamma+1)).  */
  char ** gamma1_orig;	/**< @brief Specify the threshold for base-pairing probabilities of the conclusive common secondary structuresby 1/(gamma+1)) original value given at command line.  */
  unsigned int gamma1_min; /**< @brief Specify the threshold for base-pairing probabilities of the conclusive common secondary structuresby 1/(gamma+1))'s minimum occurreces */
  unsigned int gamma1_max; /**< @brief Specify the threshold for base-pairing probabilities of the conclusive common secondary structuresby 1/(gamma+1))'s maximum occurreces */
  const char *gamma1_help; /**< @brief Specify the threshold for base-pairing probabilities of the conclusive common secondary structuresby 1/(gamma+1)) help description.  */
  int ipknot_flag;	/**< @brief use IPknot decoding (default=off).  */
  const char *ipknot_help; /**< @brief use IPknot decoding help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int full_help_given ;	/**< @brief Whether full-help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int refinement_given ;	/**< @brief Whether refinement was given.  */
  unsigned int weight_given ;	/**< @brief Whether weight was given.  */
  unsigned int eta_given ;	/**< @brief Whether eta was given.  */
  unsigned int max_iter_given ;	/**< @brief Whether max-iter was given.  */
  unsigned int fourway_pct_given ;	/**< @brief Whether fourway-pct was given.  */
  unsigned int verbose_given ;	/**< @brief Whether verbose was given.  */
  unsigned int align_model_given ;	/**< @brief Whether align-model was given.  */
  unsigned int align_pct_given ;	/**< @brief Whether align-pct was given.  */
  unsigned int align_th_given ;	/**< @brief Whether align-th was given.  */
  unsigned int fold_model_given ;	/**< @brief Whether fold-model was given.  */
  unsigned int fold_pct_given ;	/**< @brief Whether fold-pct was given.  */
  unsigned int fold_th_given ;	/**< @brief Whether fold-th was given.  */
  unsigned int gamma_given ;	/**< @brief Whether gamma was given.  */
  unsigned int use_alifold_given ;	/**< @brief Whether use-alifold was given.  */
  unsigned int fold_th1_given ;	/**< @brief Whether fold-th1 was given.  */
  unsigned int gamma1_given ;	/**< @brief Whether gamma1 was given.  */
  unsigned int ipknot_given ;	/**< @brief Whether ipknot was given.  */

  char **inputs ; /**< @brief unamed options (options without names) */
  unsigned inputs_num ; /**< @brief unamed options number */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];
/** @brief all the lines making the full help output (including hidden options) */
extern const char *gengetopt_args_info_full_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the full help (including hidden options)
 */
void cmdline_parser_print_full_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_align_model_values[];  /**< @brief Possible values for align-model. */
extern const char *cmdline_parser_fold_model_values[];  /**< @brief Possible values for fold-model. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* CMDLINE_H */
