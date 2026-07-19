/* Function at 0x80782AA4, size=344 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80782AA4(int r3, int r4, int r5)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80782AAC
    *(0x8c + r1) = r31; // stw @ 0x80782AB4
    *(0x88 + r1) = r30; // stw @ 0x80782AB8
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x80782AC0
    r5 = *(0xb4 + r3); // lwz @ 0x80782AC4
    r0 = *(0x20 + r4); // lwz @ 0x80782AC8
    r5 = r5 + -1; // 0x80782ACC
    if (!=) goto 0x0x80782aec;
    r12 = *(0 + r3); // lwz @ 0x80782AD8
    r12 = *(0x30 + r12); // lwz @ 0x80782ADC
    /* mtctr r12 */ // 0x80782AE0
    /* bctrl  */ // 0x80782AE4
    FUN_808179C0(); // bl 0x808179C0
    /* lis r3, 0 */ // 0x80782AEC
    r4 = *(0xb8 + r30); // lwz @ 0x80782AF0
    r3 = *(0 + r3); // lwz @ 0x80782AF4
    r4 = r4 + 1; // 0x80782AF8
    r0 = *(0x20 + r3); // lwz @ 0x80782AFC
    if (!=) goto 0x0x80782b2c;
    r12 = *(0 + r30); // lwz @ 0x80782B08
    r3 = r30;
    r12 = *(0x30 + r12); // lwz @ 0x80782B10
    /* mtctr r12 */ // 0x80782B14
    /* bctrl  */ // 0x80782B18
    r0 = *(0x20 + r3); // lwz @ 0x80782B1C
    r0 = r0 | 0x2121; // 0x80782B20
    r0 = r0 | 0x2121; // 0x80782B24
    *(0x20 + r3) = r0; // stw @ 0x80782B28
    r12 = *(0 + r30); // lwz @ 0x80782B2C
    r3 = r30;
    /* li r31, 0 */ // 0x80782B34
    r12 = *(0x30 + r12); // lwz @ 0x80782B38
    /* mtctr r12 */ // 0x80782B3C
    /* bctrl  */ // 0x80782B40
    /* lis r4, 0x101 */ // 0x80782B44
    r0 = *(0x20 + r3); // lwz @ 0x80782B48
    r3 = r4 + 0x101; // 0x80782B4C
    /* andc. r0, r3, r0 */ // 0x80782B50
    if (!=) goto 0x0x80782b70;
    /* lis r3, 0 */ // 0x80782B58
    r3 = *(0 + r3); // lwz @ 0x80782B5C
    FUN_8070D8D8(r3, r3); // bl 0x8070D8D8
    if (==) goto 0x0x80782b70;
    /* li r31, 1 */ // 0x80782B6C
    /* lis r3, 0 */ // 0x80782B70
    r0 = *(0xb4 + r30); // lwz @ 0x80782B74
    r3 = *(0 + r3); // lwz @ 0x80782B78
    /* li r4, 0 */ // 0x80782B7C
    r3 = *(0x20 + r3); // lwz @ 0x80782B80
    if (<) goto 0x0x80782b9c;
    r0 = *(0xb8 + r30); // lwz @ 0x80782B8C
    if (>=) goto 0x0x80782b9c;
    /* li r4, 1 */ // 0x80782B98
    if (==) goto 0x0x80782bdc;
    if (!=) goto 0x0x80782bdc;
    r3 = *(0xb0 + r30); // lwz @ 0x80782BAC
    r12 = *(0 + r3); // lwz @ 0x80782BB0
    r12 = *(0xc + r12); // lwz @ 0x80782BB4
    /* mtctr r12 */ // 0x80782BB8
    /* bctrl  */ // 0x80782BBC
    r3 = *(0xb0 + r30); // lwz @ 0x80782BC0
    r4 = r30 + 0x30; // 0x80782BC4
    r12 = *(0 + r3); // lwz @ 0x80782BC8
    r12 = *(0x74 + r12); // lwz @ 0x80782BCC
    /* mtctr r12 */ // 0x80782BD0
    /* bctrl  */ // 0x80782BD4
    /* b 0x80782bf0 */ // 0x80782BD8
    r3 = *(0xb0 + r30); // lwz @ 0x80782BDC
    r12 = *(0 + r3); // lwz @ 0x80782BE0
    r12 = *(0x10 + r12); // lwz @ 0x80782BE4
    /* mtctr r12 */ // 0x80782BE8
    /* bctrl  */ // 0x80782BEC
    r3 = *(0xb0 + r30); // lwz @ 0x80782BF0
    r3 = r3 + 0x74; // 0x80782BF4
    FUN_805E3430(r3); // bl 0x805E3430
}