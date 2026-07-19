/* Function at 0x8068384C, size=140 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8068384C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80683858
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r3, 0 */ // 0x80683864
    /* lis r4, 0 */ // 0x80683868
    r3 = r3 + 0; // 0x8068386C
    *(0 + r31) = r3; // stw @ 0x80683870
    /* lis r7, 0 */ // 0x80683874
    r4 = r4 + 0; // 0x80683878
    r6 = *(0 + r7); // lwzu @ 0x8068387C
    r3 = r31 + 0x58; // 0x80683880
    *(8 + r1) = r6; // stw @ 0x80683884
    r5 = *(4 + r7); // lwz @ 0x80683888
    r0 = *(8 + r7); // lwz @ 0x8068388C
    *(0xc + r1) = r5; // stw @ 0x80683890
    *(0x10 + r1) = r0; // stw @ 0x80683894
    *(0x44 + r31) = r4; // stw @ 0x80683898
    *(0x48 + r31) = r31; // stw @ 0x8068389C
    *(0x4c + r31) = r6; // stw @ 0x806838A0
    *(0x50 + r31) = r5; // stw @ 0x806838A4
    *(0x54 + r31) = r0; // stw @ 0x806838A8
    FUN_80669F74(); // bl 0x80669F74
    r3 = r31 + 0x27c; // 0x806838B0
    FUN_806497A4(r3); // bl 0x806497A4
    r3 = r31 + 0x4d0; // 0x806838B8
    FUN_8066CEBC(r3, r3); // bl 0x8066CEBC
    r3 = r31;
    r31 = *(0x1c + r1); // lwz @ 0x806838C4
    r0 = *(0x24 + r1); // lwz @ 0x806838C8
    return;
}