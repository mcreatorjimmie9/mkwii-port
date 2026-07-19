/* Function at 0x8061E9EC, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061E9EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r3 = *(0 + r3); // lwz @ 0x8061E9F4
    *(0x14 + r1) = r0; // stw @ 0x8061E9F8
    /* slwi r0, r4, 2 */ // 0x8061E9FC
    r3 = *(0x10 + r3); // lwz @ 0x8061EA00
    /* lwzx r3, r3, r0 */ // 0x8061EA04
    r3 = *(0x98 + r3); // lwz @ 0x8061EA08
    FUN_80627744(); // bl 0x80627744
    r0 = *(0x14 + r1); // lwz @ 0x8061EA10
    r3 = *(0x70 + r3); // lwz @ 0x8061EA14
    return;
}