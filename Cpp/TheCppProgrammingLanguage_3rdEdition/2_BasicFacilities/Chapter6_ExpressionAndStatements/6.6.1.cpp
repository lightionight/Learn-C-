/**
 * 6.6.1 p140
 * Rewrite the following for statement as an equivalent while statement
 * for(i = 0; i < max_length; i++)
 *  if(input_line[i] == '?')
 *  {
 *      quest_count++;
 * }
 * */
/******************************************************
 * AUTHOR: FENG
 * TIME：2020.10.28
 * ***************************************************/

int i = 0;
while(i < max_length)
{
    i++;
    if(input_line[i] == '?')
    {
        quest_count++;
    }
}


// using c style Pointer variable
while(*(input_line) != '\0')
{
    if(*input_line == '?')
    {
        quest_count++;
    }

    input_line++;
}