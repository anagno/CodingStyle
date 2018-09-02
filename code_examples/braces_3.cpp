for (i = 0; i < 5; ++i)
   printf(logfile, "loop reached %d\n", i);
   printf("%d\n", i*2);    /* The incorrect indentation hides the fact 
                               that this line is not part of the loop body. */
printf("Ended loop");
