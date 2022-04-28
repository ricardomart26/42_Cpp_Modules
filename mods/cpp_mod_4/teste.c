


void    execute(char **cmd, char **env)
{
    int i = 0, j = 0;
    int writeTo, readFrom, save_in, save_out;

    while (cmd[j] && !strcmp(cmd[j], "|"))
        j++;
    if (!cmd[j] && !strcmp(cmd[0], "cd"))
    {
        cd(cmd);
        return;
    }

    readFrom = dup(STDIN_FILENO);
    save_in = dup(STDIN_FILENO);
    save_out = dup(STDOUT_FILENO);

    j = 0;
    int last = 0;
    while (!last)
    {
        while (cmd[j] && !strcmp(cmd[j], "|"))
            j++;
        if (!cmd[j])
            last = 1;
        cmd[j] = NULL;

        pipe(fd);
        if (last)
            writeTo = save_out;
        else
            writeTo = fd[1];

        dup2(readFrom, STDIN_FILENO);
        close(readFrom);
        dup2(writeTo, STDOUT_FILENO);
        close(writeTo);

        if (fork() = 0)
            execute_child(cmd + i, env);
        else
            readFrom = fd[0];

        i = ++j;
    }

    dup2(save_in, STDIN_FILENO);
    close (save_in);
    close (fd[1]);
    close (readFrom);
}