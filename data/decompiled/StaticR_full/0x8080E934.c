/* Function at 0x8080E934, size=284 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_8080E934(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r4, 0 */ // 0x8080E93C
    /* stfd f31, 0x18(r1) */ // 0x8080E944
    /* fmr f31, f1 */ // 0x8080E948
    *(0x14 + r1) = r31; // stw @ 0x8080E94C
    *(0x10 + r1) = r30; // stw @ 0x8080E950
    *(0xc + r1) = r29; // stw @ 0x8080E954
    *(8 + r1) = r28; // stw @ 0x8080E958
    r28 = r3;
    r31 = *(0xc0 + r3); // lwz @ 0x8080E960
    if (<) goto 0x0x8080e97c;
    r0 = *(0xb8 + r3); // lwz @ 0x8080E96C
    if (>=) goto 0x0x8080e97c;
    /* li r4, 1 */ // 0x8080E978
    if (!=) goto 0x0x8080e994;
    r12 = *(0xb4 + r3); // lwzu @ 0x8080E984
    r12 = *(0x18 + r12); // lwz @ 0x8080E988
    /* mtctr r12 */ // 0x8080E98C
    /* bctrl  */ // 0x8080E990
    r3 = *(0xbc + r28); // lwz @ 0x8080E994
    /* slwi r0, r31, 2 */ // 0x8080E998
    /* li r29, 0 */ // 0x8080E99C
    /* li r28, 0 */ // 0x8080E9A0
    /* lwzx r30, r3, r0 */ // 0x8080E9A4
    /* li r31, 1 */ // 0x8080E9A8
    /* b 0x8080ea08 */ // 0x8080E9AC
    /* li r3, 0 */ // 0x8080E9B4
    if (<) goto 0x0x8080e9cc;
    r0 = *(0xe0 + r30); // lwz @ 0x8080E9BC
    if (>=) goto 0x0x8080e9cc;
    /* li r3, 1 */ // 0x8080E9C8
    if (!=) goto 0x0x8080e9e8;
    r12 = *(0xdc + r30); // lwz @ 0x8080E9D4
    r3 = r30 + 0xdc; // 0x8080E9D8
    r12 = *(0x18 + r12); // lwz @ 0x8080E9DC
    /* mtctr r12 */ // 0x8080E9E0
    /* bctrl  */ // 0x8080E9E4
    r3 = *(0xe4 + r30); // lwz @ 0x8080E9E8
    /* lwzx r3, r3, r28 */ // 0x8080E9EC
    r0 = *(0x121 + r3); // lbz @ 0x8080E9F0
    if (!=) goto 0x0x8080ea00;
    *(0xb0 + r3) = r31; // stw @ 0x8080E9FC
    r28 = r28 + 4; // 0x8080EA00
    r29 = r29 + 1; // 0x8080EA04
    r0 = *(0xb4 + r30); // lwz @ 0x8080EA08
    if (<) goto 0x0x8080e9b0;
    /* li r0, 1 */ // 0x8080EA14
    *(0xb8 + r30) = r0; // stw @ 0x8080EA18
    /* li r0, 0 */ // 0x8080EA1C
    *(0xd0 + r30) = r0; // stw @ 0x8080EA20
    /* stfs f31, 0xd8(r30) */ // 0x8080EA24
    *(0xd4 + r30) = r0; // stb @ 0x8080EA28
    /* lfd f31, 0x18(r1) */ // 0x8080EA2C
    r31 = *(0x14 + r1); // lwz @ 0x8080EA30
    r30 = *(0x10 + r1); // lwz @ 0x8080EA34
    r29 = *(0xc + r1); // lwz @ 0x8080EA38
    r28 = *(8 + r1); // lwz @ 0x8080EA3C
    r0 = *(0x24 + r1); // lwz @ 0x8080EA40
    return;
}