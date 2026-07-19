/* Function at 0x8066CAD8, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8066CAD8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x18 + r1) = r30; // stw @ 0x8066CAE8
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8066CAF4
    r3 = r30 + 0x44; // 0x8066CAF8
    r4 = r4 + 0; // 0x8066CAFC
    *(0 + r30) = r4; // stw @ 0x8066CB00
    FUN_8066880C(r4, r3, r4); // bl 0x8066880C
    /* li r0, 0 */ // 0x8066CB08
    *(0x188 + r30) = r0; // stw @ 0x8066CB0C
    /* lis r3, 0 */ // 0x8066CB10
    /* lis r5, 0 */ // 0x8066CB14
    r7 = *(0 + r3); // lwzu @ 0x8066CB18
    /* lis r4, 0 */ // 0x8066CB1C
    r31 = r30 + 0x1a8; // 0x8066CB20
    r5 = r5 + 0; // 0x8066CB24
    r6 = *(4 + r3); // lwz @ 0x8066CB28
    r4 = r4 + 0; // 0x8066CB2C
    r0 = *(8 + r3); // lwz @ 0x8066CB30
    r3 = r31;
    *(8 + r1) = r7; // stw @ 0x8066CB38
    *(0xc + r1) = r6; // stw @ 0x8066CB3C
    *(0x10 + r1) = r0; // stw @ 0x8066CB40
    *(0x18c + r30) = r5; // stw @ 0x8066CB44
    *(0x190 + r30) = r30; // stw @ 0x8066CB48
    *(0x194 + r30) = r7; // stw @ 0x8066CB4C
    *(0x198 + r30) = r6; // stw @ 0x8066CB50
    *(0x19c + r30) = r0; // stw @ 0x8066CB54
    *(0 + r30) = r4; // stw @ 0x8066CB58
    FUN_806A0418(); // bl 0x806A0418
    /* lis r4, 0 */ // 0x8066CB60
    r3 = r30 + 0x31c; // 0x8066CB64
    r4 = r4 + 0; // 0x8066CB68
    *(0 + r31) = r4; // stw @ 0x8066CB6C
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r30 + 0x490; // 0x8066CB74
    FUN_806A0418(r3, r4, r3); // bl 0x806A0418
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x8066CB80
    r30 = *(0x18 + r1); // lwz @ 0x8066CB84
    r0 = *(0x24 + r1); // lwz @ 0x8066CB88
    return;
}