/* Function at 0x805BB964, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805BB964(int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x805BB96C
    FUN_805BB868(r4); // bl 0x805BB868
    r0 = *(0x14 + r1); // lwz @ 0x805BB978
    return;
}