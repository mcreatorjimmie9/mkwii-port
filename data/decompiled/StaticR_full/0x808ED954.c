/* Function at 0x808ED954, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 5 function(s) */

int FUN_808ED954(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x808ED968
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808ED970
    r29 = r3;
    if (!=) goto 0x0x808ed9b0;
    /* li r4, 0x1f41 */ // 0x808ED97C
    /* li r5, 0 */ // 0x808ED980
    r3 = r3 + 0x6c4; // 0x808ED984
    FUN_806A0A34(r4, r5, r3); // bl 0x806A0A34
    /* lis r5, 0 */ // 0x808ED98C
    r3 = r29 + 0xb4c; // 0x808ED990
    r5 = r5 + 0; // 0x808ED994
    r4 = r5 + 0x199; // 0x808ED998
    r5 = r5 + 0x1a8; // 0x808ED99C
    FUN_806A0D70(r5, r3, r5, r4, r5); // bl 0x806A0D70
    /* li r0, 0 */ // 0x808ED9A4
    *(0xbcc + r29) = r0; // stb @ 0x808ED9A8
    /* b 0x808ed9d4 */ // 0x808ED9AC
    r3 = r30;
    FUN_808F2D1C(r3); // bl 0x808F2D1C
    r31 = r3;
    r3 = r30;
    FUN_808F2DD8(r3, r3); // bl 0x808F2DD8
    r5 = r3;
    r3 = r29;
    r4 = r31;
    FUN_808ED9F0(r3, r5, r3, r4); // bl 0x808ED9F0
    r0 = *(0x24 + r1); // lwz @ 0x808ED9D4
    r31 = *(0x1c + r1); // lwz @ 0x808ED9D8
    r30 = *(0x18 + r1); // lwz @ 0x808ED9DC
    r29 = *(0x14 + r1); // lwz @ 0x808ED9E0
    return;
}