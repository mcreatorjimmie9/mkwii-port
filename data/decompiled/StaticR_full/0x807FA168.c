/* Function at 0x807FA168, size=292 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 9 function(s) */

int FUN_807FA168(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r8 = r4;
    *(0x3c + r1) = r31; // stw @ 0x807FA17C
    *(0x38 + r1) = r30; // stw @ 0x807FA180
    r30 = r5;
    *(0x34 + r1) = r29; // stw @ 0x807FA188
    r29 = r3;
    if (==) goto 0x0x807fa1b0;
    if (==) goto 0x0x807fa1b0;
    if (==) goto 0x0x807fa21c;
    if (==) goto 0x0x807fa21c;
    /* b 0x807fa26c */ // 0x807FA1AC
    if (!=) goto 0x0x807fa208;
    r3 = r29;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r29 + 0x58; // 0x807FA1C4
    /* li r5, 2 */ // 0x807FA1C8
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    r3 = r29;
    FUN_808A1BCC(r3, r4, r5, r3); // bl 0x808A1BCC
    r4 = r29 + 0x58; // 0x807FA1DC
    /* li r5, 2 */ // 0x807FA1E0
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    FUN_805A4400(r4, r5, r3, r4); // bl 0x805A4400
    r3 = r29;
    FUN_807FA330(r4, r3, r4, r5); // bl 0x807FA330
    /* b 0x807fa26c */ // 0x807FA204
    r3 = r29;
    r4 = r7;
    r5 = r8 + 0x50; // 0x807FA210
    FUN_807FA330(r3, r4, r5); // bl 0x807FA330
    /* b 0x807fa26c */ // 0x807FA218
    r0 = *(0xc0 + r3); // lwz @ 0x807FA21C
    if (==) goto 0x0x807fa26c;
    r3 = *(8 + r3); // lwz @ 0x807FA228
    /* lis r31, 0 */ // 0x807FA22C
    /* lis r5, 0 */ // 0x807FA230
    /* lfs f1, 0(r31) */ // 0x807FA234
    /* lfs f2, 0(r5) */ // 0x807FA238
    /* li r4, 1 */ // 0x807FA23C
    r3 = *(0x28 + r3); // lwz @ 0x807FA240
    /* li r5, 1 */ // 0x807FA244
    FUN_805E73A4(r4, r5); // bl 0x805E73A4
    /* li r3, 0x5a */ // 0x807FA24C
    /* li r0, 3 */ // 0x807FA250
    *(0xf4 + r29) = r3; // stw @ 0x807FA254
    r3 = r29;
    /* lfs f1, 0(r31) */ // 0x807FA25C
    /* li r4, 0x249 */ // 0x807FA260
    *(0xc0 + r29) = r0; // stw @ 0x807FA264
    FUN_808A0A88(r3, r4); // bl 0x808A0A88
    r3 = r30;
    r31 = *(0x3c + r1); // lwz @ 0x807FA270
    r30 = *(0x38 + r1); // lwz @ 0x807FA274
    r29 = *(0x34 + r1); // lwz @ 0x807FA278
    r0 = *(0x44 + r1); // lwz @ 0x807FA27C
    return;
}