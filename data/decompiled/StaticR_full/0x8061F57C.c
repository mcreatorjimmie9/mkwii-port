/* Function at 0x8061F57C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_8061F57C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r5, 0 */ // 0x8061F584
    r4 = r3;
    r5 = r5 + 0; // 0x8061F58C
    *(0x14 + r1) = r0; // stw @ 0x8061F590
    r3 = r5 + 0x11b; // 0x8061F594
    /* crclr cr1eq */ // 0x8061F598
    FUN_8063803C(r4, r5, r3); // bl 0x8063803C
    /* lis r4, 0 */ // 0x8061F5A0
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061F5A8
    /* li r4, 2 */ // 0x8061F5AC
    /* li r6, 0 */ // 0x8061F5B0
    FUN_805CFD60(r4, r5, r4, r6); // bl 0x805CFD60
    r0 = *(0x14 + r1); // lwz @ 0x8061F5B8
    return;
}