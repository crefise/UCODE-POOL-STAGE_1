#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    if (agents == NULL)
        return NULL;
    int agent_counter = 0;
    for (int i = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, "Smith") == 0 && strength > agents[i]->strength) {
            agent_counter++;
        }
    }
    int *help = malloc(4*agent_counter);
    for (int i = 0, z = 0; agents[i] != NULL; i++) {
        if (mx_strcmp(agents[i]->name, "Smith") == 0  && strength > agents[i]->strength) {
            help[z] = i;
            z++;
        }
    }
    t_agent **result = malloc(agent_counter*16);
    for (int i = 0; i < agent_counter; i++) {
        result[i] = mx_create_agent(agents[help[i]]->name,agents[help[i]]->power,agents[help[i]]->strength);
    }
    result[agent_counter] =  NULL;
    int test_size = 0;
    for (int i = 0; agents[i] != NULL; i++)
    {
        test_size ++;
    }
    free(help);
    mx_exterminate_agents(&agents);
    return result;
}
