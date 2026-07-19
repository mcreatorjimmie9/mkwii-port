/* Function at 0x808F2DB4, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_808F2DB4(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808F2DBC
    FUN_808F2B38(); // bl 0x808F2B38
    FUN_808F2DD8(); // bl 0x808F2DD8
    r0 = *(0x14 + r1); // lwz @ 0x808F2DC8
    return;
}