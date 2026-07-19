/* Function at 0x808C71AC, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

void FUN_808C71AC(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x808C71B4
    FUN_808B3CF4(); // bl 0x808B3CF4
    /* lis r3, 0 */ // 0x808C71BC
    r3 = *(0 + r3); // lwz @ 0x808C71C0
    r3 = *(0x90 + r3); // lwz @ 0x808C71C4
    FUN_806845FC(r3); // bl 0x806845FC
    r0 = *(0x14 + r1); // lwz @ 0x808C71CC
    return;
}