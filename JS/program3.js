function sum(...nums)
{
    let totalsum = 0

    for(let i = 0; i < nums.length; i++)
    {
        totalsum +=nums[i];
    }

    return totalsum
}


iRet = sum(11,22,33)

console.log("Sum is "+iRet)

iRet = sum(10,20)

console.log("Sum is "+iRet)
