/* Function at 0x807C9894, size=56 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_807C9894(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x807C989C
    r3 = *(0xbc + r3); // lwz @ 0x807C98A0
    r3 = *(0 + r3); // lwz @ 0x807C98A4
    FUN_8061E0C8(); // bl 0x8061E0C8
    /* li r4, 1 */ // 0x807C98AC
    /* li r5, 1 */ // 0x807C98B0
    /* li r6, 0 */ // 0x807C98B4
    FUN_80603114(r4, r5, r6); // bl 0x80603114
    r0 = *(0x14 + r1); // lwz @ 0x807C98BC
    return;
}