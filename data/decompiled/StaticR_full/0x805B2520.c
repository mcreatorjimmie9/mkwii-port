/* Function at 0x805B2520, size=20 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_805B2520(int r3)
{
    /* Stack frame: -16(r1) */
    r3 = *(0x8d4 + r3); // lwz @ 0x805B2528
    *(0x14 + r1) = r0; // stw @ 0x805B252C
    FUN_805E3430(); // bl 0x805E3430
}