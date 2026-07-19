/* Function at 0x8065BC8C, size=328 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_8065BC8C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8065BCA4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8065BCAC
    r28 = r3;
    if (!=) goto 0x0x8065bcc0;
    /* li r29, 0 */ // 0x8065BCB8
    /* b 0x8065bd14 */ // 0x8065BCBC
    /* lis r31, 0 */ // 0x8065BCC0
    r31 = r31 + 0; // 0x8065BCC4
    if (==) goto 0x0x8065bd10;
    r12 = *(0 + r29); // lwz @ 0x8065BCCC
    r3 = r29;
    r12 = *(0x28 + r12); // lwz @ 0x8065BCD4
    /* mtctr r12 */ // 0x8065BCD8
    /* bctrl  */ // 0x8065BCDC
    /* b 0x8065bcf8 */ // 0x8065BCE0
    if (!=) goto 0x0x8065bcf4;
    /* li r0, 1 */ // 0x8065BCEC
    /* b 0x8065bd04 */ // 0x8065BCF0
    r3 = *(0 + r3); // lwz @ 0x8065BCF4
    if (!=) goto 0x0x8065bce4;
    /* li r0, 0 */ // 0x8065BD00
    if (==) goto 0x0x8065bd10;
    /* b 0x8065bd14 */ // 0x8065BD0C
    /* li r29, 0 */ // 0x8065BD10
    /* lis r3, 0 */ // 0x8065BD14
    r3 = *(0 + r3); // lwz @ 0x8065BD18
    r3 = *(0 + r3); // lwz @ 0x8065BD1C
    r30 = *(0x264 + r3); // lwz @ 0x8065BD20
    if (!=) goto 0x0x8065bd34;
    /* li r30, 0 */ // 0x8065BD2C
    /* b 0x8065bd88 */ // 0x8065BD30
    /* lis r31, 0 */ // 0x8065BD34
    r31 = r31 + 0; // 0x8065BD38
    if (==) goto 0x0x8065bd84;
    r12 = *(0 + r30); // lwz @ 0x8065BD40
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065BD48
    /* mtctr r12 */ // 0x8065BD4C
    /* bctrl  */ // 0x8065BD50
    /* b 0x8065bd6c */ // 0x8065BD54
    if (!=) goto 0x0x8065bd68;
    /* li r0, 1 */ // 0x8065BD60
    /* b 0x8065bd78 */ // 0x8065BD64
    r3 = *(0 + r3); // lwz @ 0x8065BD68
    if (!=) goto 0x0x8065bd58;
    /* li r0, 0 */ // 0x8065BD74
    if (==) goto 0x0x8065bd84;
    /* b 0x8065bd88 */ // 0x8065BD80
    /* li r30, 0 */ // 0x8065BD84
    r5 = *(0x258 + r29); // lwz @ 0x8065BD88
    r3 = r30;
    r4 = r28 + 0x18e0; // 0x8065BD90
    FUN_8065D3F4(r3, r4); // bl 0x8065D3F4
    /* li r0, 0x97 */ // 0x8065BD98
    *(0x19fc + r28) = r0; // stw @ 0x8065BD9C
    r3 = r29;
    FUN_8064A384(r4, r3); // bl 0x8064A384
    r3 = r28;
    /* li r4, 0 */ // 0x8065BDAC
    FUN_80671C48(r3, r3, r4); // bl 0x80671C48
    r0 = *(0x24 + r1); // lwz @ 0x8065BDB4
    r31 = *(0x1c + r1); // lwz @ 0x8065BDB8
    r30 = *(0x18 + r1); // lwz @ 0x8065BDBC
    r29 = *(0x14 + r1); // lwz @ 0x8065BDC0
    r28 = *(0x10 + r1); // lwz @ 0x8065BDC4
    return;
}