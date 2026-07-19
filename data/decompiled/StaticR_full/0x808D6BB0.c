/* Function at 0x808D6BB0, size=92 bytes */
/* Stack frame: 48 bytes */
/* Calls: 3 function(s) */

int FUN_808D6BB0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -48(r1) */
    r4 = r3;
    *(0x34 + r1) = r0; // stw @ 0x808D6BBC
    /* li r0, 0 */ // 0x808D6BC0
    *(0x190 + r3) = r0; // stb @ 0x808D6BC4
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808D6BD0
    r6 = r6 + 0; // 0x808D6BD8
    /* li r7, 0 */ // 0x808D6BDC
    r4 = r6 + 0x2b; // 0x808D6BE0
    r5 = r6 + 0x36; // 0x808D6BE4
    r6 = r6 + 0x3c; // 0x808D6BE8
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808D6BF4
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r0 = *(0x34 + r1); // lwz @ 0x808D6BFC
    return;
}