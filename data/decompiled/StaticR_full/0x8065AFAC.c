/* Function at 0x8065AFAC, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_8065AFAC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x8065AFB4
    *(0x18 + r1) = r30; // stw @ 0x8065AFC0
    *(0x14 + r1) = r29; // stw @ 0x8065AFC4
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x8065AFCC
    r3 = *(0 + r3); // lwz @ 0x8065AFD0
    r30 = *(0x25c + r3); // lwz @ 0x8065AFD4
    if (!=) goto 0x0x8065afe8;
    /* li r30, 0 */ // 0x8065AFE0
    /* b 0x8065b03c */ // 0x8065AFE4
    /* lis r31, 0 */ // 0x8065AFE8
    r31 = r31 + 0; // 0x8065AFEC
    if (==) goto 0x0x8065b038;
    r12 = *(0 + r30); // lwz @ 0x8065AFF4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x8065AFFC
    /* mtctr r12 */ // 0x8065B000
    /* bctrl  */ // 0x8065B004
    /* b 0x8065b020 */ // 0x8065B008
    if (!=) goto 0x0x8065b01c;
    /* li r0, 1 */ // 0x8065B014
    /* b 0x8065b02c */ // 0x8065B018
    r3 = *(0 + r3); // lwz @ 0x8065B01C
    if (!=) goto 0x0x8065b00c;
    /* li r0, 0 */ // 0x8065B028
    if (==) goto 0x0x8065b038;
    /* b 0x8065b03c */ // 0x8065B034
    /* li r30, 0 */ // 0x8065B038
    r3 = *(0x25c + r29); // lwz @ 0x8065B03C
    r0 = r3 + -2; // 0x8065B040
    if (<=) goto 0x0x8065b064;
    if (!=) goto 0x0x8065b088;
    r4 = *(0x258 + r29); // lwz @ 0x8065B054
    r3 = r30;
    FUN_80663BC8(r3); // bl 0x80663BC8
    /* b 0x8065b088 */ // 0x8065B060
    r31 = *(0x258 + r29); // lwz @ 0x8065B064
    r3 = *(0x254 + r29); // lwz @ 0x8065B068
    r4 = r31;
    FUN_8066E0EC(r4); // bl 0x8066E0EC
    r4 = r3;
    r3 = r30;
    r5 = r31;
    /* li r6, 0 */ // 0x8065B080
    FUN_806637F4(r4, r3, r5, r6); // bl 0x806637F4
    r0 = *(0x24 + r1); // lwz @ 0x8065B088
    r31 = *(0x1c + r1); // lwz @ 0x8065B08C
    r30 = *(0x18 + r1); // lwz @ 0x8065B090
    r29 = *(0x14 + r1); // lwz @ 0x8065B094
    return;
}