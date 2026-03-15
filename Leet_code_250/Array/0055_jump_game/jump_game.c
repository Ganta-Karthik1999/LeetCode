

bool canJump(int* nums, int numsSize)
{    
    int index = 0, max_reach = 0;
    
    while(index < numsSize)
    {
        //Calculating max reach for the given index
        if(index + nums[index] > max_reach)
        {
            max_reach = index + nums[index];
        }
        if(index == max_reach)
        {
            break;
        }
        index++;
    }
    
    return (max_reach >= numsSize - 1);
}