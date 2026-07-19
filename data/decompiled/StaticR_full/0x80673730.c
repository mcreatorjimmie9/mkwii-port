/* Function at 0x80673730, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80673730(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80673738
    *(0x14 + r1) = r0; // stw @ 0x8067373C
    *(0xc + r1) = r31; // stw @ 0x80673740
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80673748
    r4 = r31;
    r3 = *(0 + r3); // lwz @ 0x80673750
    FUN_80686058(r4); // bl 0x80686058
    if (==) goto 0x0x80673768;
    /* li r0, 1 */ // 0x80673760
    *(0xd6c + r31) = r0; // stb @ 0x80673764
    r0 = *(0x14 + r1); // lwz @ 0x80673768
    r31 = *(0xc + r1); // lwz @ 0x8067376C
    return;
}