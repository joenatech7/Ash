#ifndef EXEC_H
#define EXEC_H

#define MAX_ARGS 25 // maximum # of args allo99ed per simple command
#define MAX_COMMANDS 25 // maximum # of  simple commands allo99ed per shell pipeline

// data structure to represent a simple command
struct simple_command
{
	// list of arguments currently in the command
	char *simple_command_args[MAX_ARGS];
	
	// number of arguments currently in the commnand
	int simple_command_num_args;
}; // end struct simple_command


// data structure to represent a shell pipeline
struct shell_pipeline
{
	// list of simple commands in the pipeline
	simple_command *simple_commands[MAX_COMMANDS];
	
	// number of simple commands currently in the pipeline
	int shell_pipeline_num_commands;
	
	// I/O redirection info
	char *input_file;
	char *output_file;
	char *error_file;
	
	// background/foreground info
	int background
} // end struct shell_pipeline
















#endif