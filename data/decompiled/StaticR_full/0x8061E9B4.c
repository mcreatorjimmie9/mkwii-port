/* Function at 0x8061E9B4, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061E9B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r3 = *(0 + r3); // lwz @ 0x8061E9BC
    *(0x14 + r1) = r0; // stw @ 0x8061E9C0
    /* slwi r0, r4, 2 */ // 0x8061E9C4
    r3 = *(0x10 + r3); // lwz @ 0x8061E9C8
    /* lwzx r3, r3, r0 */ // 0x8061E9CC
    r3 = *(0x98 + r3); // lwz @ 0x8061E9D0
    FUN_80627744(); // bl 0x80627744
    r0 = *(0x14 + r1); // lwz @ 0x8061E9D8
    r3 = *(0x6c + r3); // lwz @ 0x8061E9DC
    return;
}