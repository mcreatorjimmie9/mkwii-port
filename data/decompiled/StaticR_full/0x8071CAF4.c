/* Function at 0x8071CAF4, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8071CAF4(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8071CAFC
    /* lis r5, 0 */ // 0x8071CB00
    *(0x24 + r1) = r0; // stw @ 0x8071CB04
    r4 = r4 + 0; // 0x8071CB08
    r5 = r5 + 0; // 0x8071CB0C
    *(0x1c + r1) = r31; // stw @ 0x8071CB10
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x8071CB18
    *(0x14 + r1) = r29; // stw @ 0x8071CB1C
    *(0x10 + r1) = r28; // stw @ 0x8071CB20
    *(0x40 + r3) = r4; // stw @ 0x8071CB24
    /* lis r4, 0 */ // 0x8071CB28
    r0 = *(0xc + r5); // lwz @ 0x8071CB2C
    *(0x1c + r3) = r0; // stw @ 0x8071CB30
    r0 = *(0x80 + r5); // lwz @ 0x8071CB34
    *(0x20 + r3) = r0; // stw @ 0x8071CB38
    r4 = *(0 + r4); // lwz @ 0x8071CB3C
    r0 = *(0xb70 + r4); // lwz @ 0x8071CB40
    if (<) goto 0x0x8071cb58;
    r4 = *(0x250 + r5); // lwz @ 0x8071CB4C
    r0 = r4 + 4; // 0x8071CB50
    /* b 0x8071cb5c */ // 0x8071CB54
    r0 = *(0x250 + r5); // lwz @ 0x8071CB58
    /* lis r4, 0 */ // 0x8071CB5C
    *(0x24 + r3) = r0; // stw @ 0x8071CB60
    r4 = r4 + 0; // 0x8071CB64
    /* lis r8, 0 */ // 0x8071CB68
    r0 = *(0x420 + r4); // lwz @ 0x8071CB6C
    /* li r6, 2 */ // 0x8071CB70
    *(0x28 + r3) = r0; // stw @ 0x8071CB74
    /* li r5, 3 */ // 0x8071CB78
    r0 = *(0x1c + r3); // lwz @ 0x8071CB7C
    r4 = *(0x664 + r4); // lwz @ 0x8071CB80
    *(0x2c + r3) = r4; // stw @ 0x8071CB84
    r4 = *(0 + r8); // lwz @ 0x8071CB88
    r7 = *(0x25 + r4); // lbz @ 0x8071CB8C
    r4 = r7 + -2; // 0x8071CB90
    /* orc r6, r7, r6 */ // 0x8071CB94
    /* srwi r4, r4, 1 */ // 0x8071CB98
    /* subf r4, r4, r6 */ // 0x8071CB9C
    /* srwi r4, r4, 0x1f */ // 0x8071CBA0
    *(0x30 + r3) = r4; // stb @ 0x8071CBA4
    r4 = *(0 + r8); // lwz @ 0x8071CBA8
    r6 = *(0x25 + r4); // lbz @ 0x8071CBAC
    r4 = r6 + -3; // 0x8071CBB0
    /* orc r5, r6, r5 */ // 0x8071CBB4
    /* srwi r4, r4, 1 */ // 0x8071CBB8
    /* subf r4, r4, r5 */ // 0x8071CBBC
    /* srwi r4, r4, 0x1f */ // 0x8071CBC0
    *(0x31 + r3) = r4; // stb @ 0x8071CBC4
    /* slwi r3, r0, 2 */ // 0x8071CBC8
    FUN_805E3430(); // bl 0x805E3430
}