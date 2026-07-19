/* Function at 0x808BE9D8, size=228 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_808BE9D8(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0 */ // 0x808BE9E4
    /* lis r31, 0 */ // 0x808BE9EC
    r31 = r31 + 0; // 0x808BE9F0
    *(0x38 + r1) = r30; // stw @ 0x808BE9F4
    r4 = r31 + 0x14a; // 0x808BE9F8
    *(0x34 + r1) = r29; // stw @ 0x808BE9FC
    r29 = r3;
    *(0x25c + r3) = r0; // stb @ 0x808BEA04
    r3 = r3 + 0xa8; // 0x808BEA08
    FUN_80665D1C(r4, r3); // bl 0x80665D1C
    if (==) goto 0x0x808bea28;
    r3 = r29;
    r4 = r31 + 0x151; // 0x808BEA1C
    /* li r5, 1 */ // 0x808BEA20
    FUN_806A11CC(r3, r4, r5); // bl 0x806A11CC
    /* lis r9, 0 */ // 0x808BEA28
    r8 = *(0 + r9); // lwzu @ 0x808BEA2C
    *(8 + r1) = r8; // stw @ 0x808BEA30
    r7 = *(4 + r9); // lwz @ 0x808BEA38
    /* li r30, 0 */ // 0x808BEA3C
    r6 = *(8 + r9); // lwz @ 0x808BEA40
    r5 = *(0xc + r9); // lwz @ 0x808BEA44
    r4 = *(0x10 + r9); // lwz @ 0x808BEA48
    r3 = *(0x14 + r9); // lwz @ 0x808BEA4C
    r0 = *(0x18 + r9); // lwz @ 0x808BEA50
    *(0xc + r1) = r7; // stw @ 0x808BEA54
    *(0x10 + r1) = r6; // stw @ 0x808BEA58
    *(0x14 + r1) = r5; // stw @ 0x808BEA5C
    *(0x18 + r1) = r4; // stw @ 0x808BEA60
    *(0x1c + r1) = r3; // stw @ 0x808BEA64
    *(0x20 + r1) = r0; // stw @ 0x808BEA68
    r4 = *(0 + r31); // lwz @ 0x808BEA6C
    r3 = r29 + 0xa8; // 0x808BEA70
    FUN_80665D1C(r3); // bl 0x80665D1C
    if (==) goto 0x0x808bea90;
    r4 = *(0 + r31); // lwz @ 0x808BEA80
    r3 = r29;
    /* li r5, 0 */ // 0x808BEA88
    FUN_806A11CC(r3, r5); // bl 0x806A11CC
    r30 = r30 + 1; // 0x808BEA90
    r31 = r31 + 4; // 0x808BEA94
    if (<) goto 0x0x808bea6c;
    r0 = *(0x44 + r1); // lwz @ 0x808BEAA0
    r31 = *(0x3c + r1); // lwz @ 0x808BEAA4
    r30 = *(0x38 + r1); // lwz @ 0x808BEAA8
    r29 = *(0x34 + r1); // lwz @ 0x808BEAAC
    return;
}