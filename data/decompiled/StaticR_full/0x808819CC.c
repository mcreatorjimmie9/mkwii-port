/* Function at 0x808819CC, size=148 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808819CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    r0 = r3;
    *(0x9c + r1) = r31; // stw @ 0x808819DC
    r31 = r4;
    r4 = r0;
    *(0x190 + r3) = r5; // stb @ 0x808819E8
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r3, 0 */ // 0x808819F4
    /* li r0, 0xd */ // 0x808819F8
    r3 = r3 + 0; // 0x808819FC
    r4 = r3 + -4; // 0x80881A04
    /* mtctr r0 */ // 0x80881A08
    r3 = *(4 + r4); // lwz @ 0x80881A0C
    r0 = *(8 + r4); // lwzu @ 0x80881A10
    *(4 + r5) = r3; // stw @ 0x80881A14
    *(8 + r5) = r0; // stwu @ 0x80881A18
    if (counter-- != 0) goto 0x0x80881a0c;
    /* lis r5, 0 */ // 0x80881A20
    r6 = r31;
    r5 = r5 + 0; // 0x80881A28
    r4 = r5 + 0xd; // 0x80881A30
    r5 = r5 + 0x18; // 0x80881A38
    FUN_8064E36C(r5, r3, r4, r7, r5); // bl 0x8064E36C
    /* li r4, -1 */ // 0x80881A44
    FUN_8064E32C(r7, r5, r3, r4); // bl 0x8064E32C
    r0 = *(0xa4 + r1); // lwz @ 0x80881A4C
    r31 = *(0x9c + r1); // lwz @ 0x80881A50
    return;
}