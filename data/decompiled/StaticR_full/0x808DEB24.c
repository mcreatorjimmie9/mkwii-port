/* Function at 0x808DEB24, size=248 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 6 function(s) */

int FUN_808DEB24(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* stfd f31, 0x18(r1) */ // 0x808DEB30
    /* fmr f31, f1 */ // 0x808DEB34
    *(0x14 + r1) = r31; // stw @ 0x808DEB38
    r31 = r6;
    *(0x10 + r1) = r30; // stw @ 0x808DEB40
    r30 = r5;
    *(0xc + r1) = r29; // stw @ 0x808DEB48
    r29 = r4;
    *(8 + r1) = r28; // stw @ 0x808DEB50
    r28 = r3;
    r0 = *(0x104 + r3); // lwz @ 0x808DEB58
    if (==) goto 0x0x808deb78;
    if (==) goto 0x0x808deb84;
    if (==) goto 0x0x808debb0;
    /* b 0x808debf8 */ // 0x808DEB74
    r3 = *(0xac + r3); // lwz @ 0x808DEB78
    FUN_8084A408(); // bl 0x8084A408
    /* b 0x808debf8 */ // 0x808DEB80
    r3 = *(0xac + r3); // lwz @ 0x808DEB84
    FUN_8084A408(); // bl 0x8084A408
    r3 = *(0x150 + r28); // lwz @ 0x808DEB8C
    if (==) goto 0x0x808debf8;
    /* fmr f1, f31 */ // 0x808DEB98
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    /* b 0x808debf8 */ // 0x808DEBAC
    r3 = *(0xac + r3); // lwz @ 0x808DEBB0
    FUN_8084A408(r5, r6); // bl 0x8084A408
    r3 = *(0x150 + r28); // lwz @ 0x808DEBB8
    if (==) goto 0x0x808debd8;
    /* fmr f1, f31 */ // 0x808DEBC4
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    r3 = *(0x154 + r28); // lwz @ 0x808DEBD8
    if (==) goto 0x0x808debf8;
    /* fmr f1, f31 */ // 0x808DEBE4
    r4 = r29;
    r5 = r30;
    r6 = r31;
    FUN_8084A408(r4, r5, r6); // bl 0x8084A408
    r0 = *(0x24 + r1); // lwz @ 0x808DEBF8
    /* lfd f31, 0x18(r1) */ // 0x808DEBFC
    r31 = *(0x14 + r1); // lwz @ 0x808DEC00
    r30 = *(0x10 + r1); // lwz @ 0x808DEC04
    r29 = *(0xc + r1); // lwz @ 0x808DEC08
    r28 = *(8 + r1); // lwz @ 0x808DEC0C
    return;
}