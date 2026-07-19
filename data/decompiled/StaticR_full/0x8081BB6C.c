/* Function at 0x8081BB6C, size=36 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_8081BB6C(void)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8081BB74
    FUN_8081BB90(); // bl 0x8081BB90
    FUN_8081C04C(); // bl 0x8081C04C
    r0 = *(0x14 + r1); // lwz @ 0x8081BB80
    return;
}