/* Function at 0x807C8904, size=324 bytes */
/* Stack frame: 192 bytes */
/* Saved registers: r14 */
/* Calls: 2 function(s) */

int FUN_807C8904(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -192(r1) */
    /* saved r14 */
    /* stmw r14, 0x78(r1) */ // 0x807C8910
    /* lis r31, 0 */ // 0x807C8914
    r30 = r3;
    r15 = r4;
    r31 = r31 + 0; // 0x807C8920
    FUN_807CF000(); // bl 0x807CF000
    /* lis r3, 0 */ // 0x807C8928
    /* lis r6, 0 */ // 0x807C892C
    /* li r14, 0 */ // 0x807C8930
    *(0x3c + r30) = r14; // stw @ 0x807C8934
    r3 = r3 + 0; // 0x807C8938
    r6 = r6 + 0; // 0x807C893C
    *(0x34 + r30) = r3; // stw @ 0x807C8940
    /* lis r4, 0 */ // 0x807C8944
    /* li r3, 0x10 */ // 0x807C8948
    *(0x38 + r30) = r6; // stw @ 0x807C894C
    r5 = *(0 + r4); // lwzu @ 0x807C8950
    r0 = *(4 + r4); // lwz @ 0x807C8954
    *(0x44 + r30) = r0; // stw @ 0x807C8958
    *(0x40 + r30) = r5; // stw @ 0x807C895C
    r0 = *(8 + r4); // lwz @ 0x807C8960
    *(0x48 + r30) = r0; // stw @ 0x807C8964
    r5 = *(0 + r4); // lwz @ 0x807C8968
    r0 = *(4 + r4); // lwz @ 0x807C896C
    *(0x50 + r30) = r0; // stw @ 0x807C8970
    *(0x4c + r30) = r5; // stw @ 0x807C8974
    r0 = *(8 + r4); // lwz @ 0x807C8978
    *(0x54 + r30) = r0; // stw @ 0x807C897C
    r5 = *(0 + r4); // lwz @ 0x807C8980
    r0 = *(4 + r4); // lwz @ 0x807C8984
    *(0x5c + r30) = r0; // stw @ 0x807C8988
    *(0x58 + r30) = r5; // stw @ 0x807C898C
    r0 = *(8 + r4); // lwz @ 0x807C8990
    *(0x60 + r30) = r0; // stw @ 0x807C8994
    *(0x64 + r30) = r6; // stw @ 0x807C8998
    *(0x68 + r30) = r14; // stw @ 0x807C899C
    r5 = *(0 + r4); // lwz @ 0x807C89A0
    r0 = *(4 + r4); // lwz @ 0x807C89A4
    *(0x70 + r30) = r0; // stw @ 0x807C89A8
    *(0x6c + r30) = r5; // stw @ 0x807C89AC
    r0 = *(8 + r4); // lwz @ 0x807C89B0
    *(0x74 + r30) = r0; // stw @ 0x807C89B4
    r5 = *(0 + r4); // lwz @ 0x807C89B8
    r0 = *(4 + r4); // lwz @ 0x807C89BC
    *(0x7c + r30) = r0; // stw @ 0x807C89C0
    *(0x78 + r30) = r5; // stw @ 0x807C89C4
    r0 = *(8 + r4); // lwz @ 0x807C89C8
    *(0x80 + r30) = r0; // stw @ 0x807C89CC
    r5 = *(0 + r4); // lwz @ 0x807C89D0
    r0 = *(4 + r4); // lwz @ 0x807C89D4
    *(0x88 + r30) = r0; // stw @ 0x807C89D8
    *(0x84 + r30) = r5; // stw @ 0x807C89DC
    r0 = *(8 + r4); // lwz @ 0x807C89E0
    *(0x8c + r30) = r0; // stw @ 0x807C89E4
    *(0x90 + r30) = r6; // stw @ 0x807C89E8
    *(0x94 + r30) = r14; // stw @ 0x807C89EC
    r5 = *(0 + r4); // lwz @ 0x807C89F0
    r0 = *(4 + r4); // lwz @ 0x807C89F4
    *(0x9c + r30) = r0; // stw @ 0x807C89F8
    *(0x98 + r30) = r5; // stw @ 0x807C89FC
    r0 = *(8 + r4); // lwz @ 0x807C8A00
    *(0xa0 + r30) = r0; // stw @ 0x807C8A04
    r5 = *(0 + r4); // lwz @ 0x807C8A08
    r0 = *(4 + r4); // lwz @ 0x807C8A0C
    *(0xa8 + r30) = r0; // stw @ 0x807C8A10
    *(0xa4 + r30) = r5; // stw @ 0x807C8A14
    r0 = *(8 + r4); // lwz @ 0x807C8A18
    *(0xac + r30) = r0; // stw @ 0x807C8A1C
    r5 = *(0 + r4); // lwz @ 0x807C8A20
    r0 = *(4 + r4); // lwz @ 0x807C8A24
    *(0xb4 + r30) = r0; // stw @ 0x807C8A28
    *(0xb0 + r30) = r5; // stw @ 0x807C8A2C
    r0 = *(8 + r4); // lwz @ 0x807C8A30
    *(0xb8 + r30) = r0; // stw @ 0x807C8A34
    *(0xbc + r30) = r15; // stw @ 0x807C8A38
    *(0xc0 + r30) = r14; // stw @ 0x807C8A3C
    *(0xc4 + r30) = r14; // stw @ 0x807C8A40
    FUN_805E3430(); // bl 0x805E3430
}