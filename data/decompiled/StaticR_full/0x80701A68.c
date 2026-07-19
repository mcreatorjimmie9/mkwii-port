/* Function at 0x80701A68, size=244 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 7 function(s) */

int FUN_80701A68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r4;
    *(0xe8 + r1) = r30; // stw @ 0x80701A7C
    r30 = r5;
    *(0xe4 + r1) = r29; // stw @ 0x80701A84
    r29 = r3;
    r3 = r31;
    FUN_805ABD4C(r3); // bl 0x805ABD4C
    if (==) goto 0x0x80701b4c;
    r3 = r31;
    r4 = r29;
    FUN_805ACDE0(r3, r4); // bl 0x805ACDE0
    if (==) goto 0x0x80701b44;
    r4 = r29;
    FUN_805ABFC4(r4, r3); // bl 0x805ABFC4
    FUN_80701B6C(r4, r3, r3); // bl 0x80701B6C
    if (==) goto 0x0x80701b24;
    r0 = *(8 + r1); // lbz @ 0x80701ACC
    /* li r3, 0 */ // 0x80701AD0
    if (==) goto 0x0x80701aec;
    r0 = *(0xdc + r1); // lwz @ 0x80701ADC
    if (==) goto 0x0x80701aec;
    /* li r3, 1 */ // 0x80701AE8
    if (==) goto 0x0x80701af8;
    *(0xcc + r1) = r30; // stw @ 0x80701AF4
    r4 = r29;
    FUN_805AC638(r4, r3); // bl 0x805AC638
    /* lis r4, 0 */ // 0x80701B04
    r4 = r4 + 0; // 0x80701B0C
    /* li r5, 0xc */ // 0x80701B10
    /* li r6, 5 */ // 0x80701B14
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* li r3, 1 */ // 0x80701B1C
    /* b 0x80701b50 */ // 0x80701B20
    /* lis r4, 0 */ // 0x80701B24
    r4 = r4 + 0; // 0x80701B2C
    /* li r5, 0xc */ // 0x80701B30
    /* li r6, 5 */ // 0x80701B34
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    /* li r3, 0 */ // 0x80701B3C
    /* b 0x80701b50 */ // 0x80701B40
    /* li r3, 0 */ // 0x80701B44
    /* b 0x80701b50 */ // 0x80701B48
    /* li r3, 0 */ // 0x80701B4C
    r0 = *(0xf4 + r1); // lwz @ 0x80701B50
    r31 = *(0xec + r1); // lwz @ 0x80701B54
    r30 = *(0xe8 + r1); // lwz @ 0x80701B58
}