/* Function at 0x807DA6A4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_807DA6A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* li r5, 0 */ // 0x807DA6AC
    *(0x14 + r1) = r0; // stw @ 0x807DA6B0
    r0 = *(0x20 + r4); // lwz @ 0x807DA6B4
    if (>) goto 0x0x807da6c8;
    FUN_807DA6DC(r5); // bl 0x807DA6DC
    r5 = r3;
    r0 = *(0x14 + r1); // lwz @ 0x807DA6C8
    r3 = r5;
    return;
}