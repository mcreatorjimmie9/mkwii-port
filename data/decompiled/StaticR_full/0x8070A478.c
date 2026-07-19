/* Function at 0x8070A478, size=28 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8070A478(int r3, int r5)
{
    /* Stack frame: -16(r1) */
    r5 = r3;
    *(0x14 + r1) = r0; // stw @ 0x8070A484
    r3 = *(4 + r3); // lwz @ 0x8070A48C
    FUN_805E3430(r5); // bl 0x805E3430
}