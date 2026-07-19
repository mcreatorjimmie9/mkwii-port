/* Function at 0x8061E978, size=60 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061E978(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r3 = *(0 + r3); // lwz @ 0x8061E980
    *(0x14 + r1) = r0; // stw @ 0x8061E984
    /* slwi r0, r4, 2 */ // 0x8061E988
    r3 = *(0x10 + r3); // lwz @ 0x8061E98C
    /* lwzx r3, r3, r0 */ // 0x8061E990
    r3 = *(0x98 + r3); // lwz @ 0x8061E994
    FUN_80627744(); // bl 0x80627744
    r0 = *(0 + r3); // lwz @ 0x8061E99C
    /* clrlwi r3, r0, 0x1f */ // 0x8061E9A0
    r0 = *(0x14 + r1); // lwz @ 0x8061E9A4
    return;
}