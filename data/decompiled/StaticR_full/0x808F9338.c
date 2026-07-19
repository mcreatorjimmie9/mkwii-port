/* Function at 0x808F9338, size=184 bytes */
/* Stack frame: 0 bytes */

void FUN_808F9338(int r3, int r4, int r5, int r6, int r7, int r8)
{
    r7 = *(0x18 + r3); // lwz @ 0x808F9338
    /* cmplw cr1, r4, r7 */
    /* bltlr cr1 */ // 0x808F9340
    r0 = *(0x26 + r3); // lbz @ 0x808F9344
    r5 = r7 + r0; // 0x808F9348
    r8 = r5 + -1; // 0x808F934C
    /* bgtlr  */ // 0x808F9354
    if (>=) goto 0x0x808f9364;
    /* li r0, 0 */ // 0x808F935C
    /* b 0x808f93a4 */ // 0x808F9360
    if (<=) goto 0x0x808f9370;
    /* li r0, 0 */ // 0x808F9368
    /* b 0x808f93a4 */ // 0x808F936C
    if (>=) goto 0x0x808f937c;
    /* li r6, -1 */ // 0x808F9374
    /* b 0x808f9388 */ // 0x808F9378
    /* li r6, -1 */ // 0x808F937C
    if (>) goto 0x0x808f9388;
    /* subf r6, r7, r4 */ // 0x808F9384
    /* li r5, 1 */ // 0x808F9388
    r0 = *(0x20 + r3); // lwz @ 0x808F938C
    r5 = r5 << r6; // slw
    r5 = r5 & r0; // 0x808F9394
    /* neg r0, r5 */ // 0x808F9398
    r0 = r0 | r5; // 0x808F939C
    /* srwi r0, r0, 0x1f */ // 0x808F93A0
    /* beqlr  */ // 0x808F93A8
    if (>=) goto 0x0x808f93bc;
    /* li r5, -1 */ // 0x808F93B4
    /* b 0x808f93cc */ // 0x808F93B8
    /* li r5, -1 */ // 0x808F93C0
    if (>) goto 0x0x808f93cc;
    /* subf r5, r7, r4 */ // 0x808F93C8
    /* li r0, 1 */ // 0x808F93CC
    r4 = *(0x24 + r3); // lha @ 0x808F93D0
    r5 = r0 << r5; // slw
    r6 = *(0x20 + r3); // lwz @ 0x808F93D8
    r0 = r4 + -1; // 0x808F93DC
    *(0x24 + r3) = r0; // sth @ 0x808F93E0
    /* andc r0, r6, r5 */ // 0x808F93E4
    *(0x20 + r3) = r0; // stw @ 0x808F93E8
    return;
}