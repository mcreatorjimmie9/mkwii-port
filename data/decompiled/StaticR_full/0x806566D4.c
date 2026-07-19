/* Function at 0x806566D4, size=168 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r21 */
/* Calls: 1 function(s) */

int FUN_806566D4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r21 */
    /* stmw r21, 0x14(r1) */ // 0x806566E0
    r21 = r3;
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r25 = r7;
    r29 = r21;
    r30 = r3 + 0xc; // 0x806566FC
    /* li r27, 0 */ // 0x80656700
    /* li r26, 0 */ // 0x80656704
    /* li r31, 0 */ // 0x80656708
    if (>=) goto 0x0x80656738;
    /* lhzx r5, r22, r31 */ // 0x80656714
    r28 = r22 + r31; // 0x80656718
    r3 = r24;
    r4 = r30;
    FUN_806585C4(r3, r4); // bl 0x806585C4
    r0 = *(2 + r28); // lhz @ 0x80656728
    r27 = r27 + r0; // 0x8065672C
    *(0x3c + r29) = r27; // sth @ 0x80656730
    /* b 0x8065673c */ // 0x80656734
    *(0x3c + r29) = r27; // sth @ 0x80656738
    r26 = r26 + 1; // 0x8065673C
    r30 = r30 + 0xc; // 0x80656740
    r29 = r29 + 2; // 0x80656748
    r31 = r31 + 4; // 0x8065674C
    if (<) goto 0x0x8065670c;
    r0 = *(0x20 + r24); // lwz @ 0x80656754
    *(8 + r21) = r0; // sth @ 0x80656758
    /* clrlwi. r0, r0, 0x10 */ // 0x8065675C
    if (!=) goto 0x0x80656768;
    *(0xa + r21) = r25; // sth @ 0x80656764
    r0 = *(0x44 + r1); // lwz @ 0x8065676C
    return;
}