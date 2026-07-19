/* Function at 0x80707CDC, size=244 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30 */
/* Calls: 8 function(s) */

int FUN_80707CDC(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x28 + r1) = r30; // stw @ 0x80707CEC
    r30 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x80707CF8
    /* lis r7, 0 */ // 0x80707CFC
    r4 = r4 + 0; // 0x80707D00
    *(0 + r30) = r4; // stw @ 0x80707D04
    /* lis r3, 0 */ // 0x80707D08
    r7 = r7 + 0; // 0x80707D0C
    r10 = *(0 + r3); // lwzu @ 0x80707D10
    /* lis r6, 0 */ // 0x80707D14
    *(0x14 + r1) = r10; // stw @ 0x80707D18
    r9 = *(4 + r3); // lwz @ 0x80707D1C
    r8 = *(8 + r3); // lwz @ 0x80707D20
    r3 = r30 + 0x6c; // 0x80707D24
    *(0x54 + r30) = r8; // stw @ 0x80707D28
    *(0x44 + r30) = r7; // stw @ 0x80707D2C
    *(0x48 + r30) = r30; // stw @ 0x80707D30
    *(0x4c + r30) = r10; // stw @ 0x80707D34
    *(0x50 + r30) = r9; // stw @ 0x80707D38
    r5 = *(0 + r6); // lwzu @ 0x80707D3C
    *(0x18 + r1) = r9; // stw @ 0x80707D40
    r4 = *(4 + r6); // lwz @ 0x80707D44
    r0 = *(8 + r6); // lwz @ 0x80707D48
    *(0x1c + r1) = r8; // stw @ 0x80707D4C
    *(8 + r1) = r5; // stw @ 0x80707D50
    *(0xc + r1) = r4; // stw @ 0x80707D54
    *(0x10 + r1) = r0; // stw @ 0x80707D58
    *(0x58 + r30) = r7; // stw @ 0x80707D5C
    *(0x5c + r30) = r30; // stw @ 0x80707D60
    *(0x60 + r30) = r5; // stw @ 0x80707D64
    *(0x64 + r30) = r4; // stw @ 0x80707D68
    *(0x68 + r30) = r0; // stw @ 0x80707D6C
    FUN_80668134(); // bl 0x80668134
    r3 = r30 + 0x7c; // 0x80707D74
    FUN_8066D3F0(r3); // bl 0x8066D3F0
    r31 = r30 + 0x1f0; // 0x80707D7C
    r3 = r31;
    FUN_806A0418(r3, r3); // bl 0x806A0418
    /* lis r4, 0 */ // 0x80707D88
    r3 = r30 + 0x364; // 0x80707D8C
    r4 = r4 + 0; // 0x80707D90
    *(0 + r31) = r4; // stw @ 0x80707D94
    FUN_8066CEBC(r4, r3, r4); // bl 0x8066CEBC
    r3 = r30 + 0x4d8; // 0x80707D9C
    FUN_8066D0BC(r3, r4, r3); // bl 0x8066D0BC
    r3 = r30 + 0x650; // 0x80707DA4
    FUN_80654ECC(r3, r3); // bl 0x80654ECC
    r3 = r30 + 0x714; // 0x80707DAC
    FUN_80654ECC(r3, r3, r3); // bl 0x80654ECC
    r3 = r30;
    r31 = *(0x2c + r1); // lwz @ 0x80707DB8
    r30 = *(0x28 + r1); // lwz @ 0x80707DBC
    r0 = *(0x34 + r1); // lwz @ 0x80707DC0
    return;
}