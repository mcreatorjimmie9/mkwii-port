/* Function at 0x805E0BBC, size=300 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_805E0BBC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -48(r1) */
    /* saved r27 */
    /* stmw r27, 0x1c(r1) */ // 0x805E0BC8
    /* lis r31, 0 */ // 0x805E0BCC
    r31 = r31 + 0; // 0x805E0BD0
    /* li r29, 0 */ // 0x805E0BD4
    /* li r28, 0 */ // 0x805E0BD8
    /* lis r27, 0 */ // 0x805E0BDC
    *(8 + r1) = r3; // stw @ 0x805E0BE0
    r30 = *(0xbc + r31); // lwz @ 0x805E0BE4
    r0 = *(0xa7 + r31); // lbz @ 0x805E0BE8
    if (==) goto 0x0x805e0c70;
    /* mtctr r28 */ // 0x805E0BF4
    if (==) goto 0x0x805e0c70;
    r0 = *(0xc0 + r31); // lwz @ 0x805E0C00
    r28 = r28 + -1; // 0x805E0C04
    r6 = *(0x50 + r31); // lwz @ 0x805E0C08
    r4 = r29 + r0; // 0x805E0C0C
    r5 = *(0xd8 + r31); // lwz @ 0x805E0C10
    r3 = r4 u/ r6; // 0x805E0C14
    r0 = r6 + -1; // 0x805E0C18
    r5 = r5 + 1; // 0x805E0C1C
    *(0xd8 + r31) = r5; // stw @ 0x805E0C20
    r3 = r3 * r6; // 0x805E0C24
    /* subf r3, r3, r4 */ // 0x805E0C28
    if (!=) goto 0x0x805e0c54;
    r0 = *(0xa6 + r31); // lbz @ 0x805E0C34
    /* clrlwi. r0, r0, 0x1f */ // 0x805E0C38
    if (==) goto 0x0x805e0c70;
    r3 = *(8 + r1); // lwz @ 0x805E0C40
    r0 = *(0xb4 + r31); // lwz @ 0x805E0C44
    r30 = *(0 + r3); // lwz @ 0x805E0C48
    *(8 + r1) = r0; // stw @ 0x805E0C4C
    /* b 0x805e0c68 */ // 0x805E0C50
    r3 = *(8 + r1); // lwz @ 0x805E0C54
    r4 = *(0 + r3); // lwz @ 0x805E0C58
    r0 = r3 + r30; // 0x805E0C5C
    *(8 + r1) = r0; // stw @ 0x805E0C60
    r30 = r4;
    r29 = r29 + 1; // 0x805E0C68
    if (counter-- != 0) goto 0x0x805e0c00;
    *(0xc + r1) = r29; // stw @ 0x805E0C70
    FUN_805E0CEC(r3); // bl 0x805E0CEC
    r0 = *(0xc0 + r31); // lwz @ 0x805E0C7C
    r28 = r3;
    r5 = *(0x50 + r31); // lwz @ 0x805E0C84
    r4 = r29 + r0; // 0x805E0C88
    r3 = r4 u/ r5; // 0x805E0C8C
    r0 = r5 + -1; // 0x805E0C90
    r3 = r3 * r5; // 0x805E0C94
    /* subf r3, r3, r4 */ // 0x805E0C98
    if (!=) goto 0x0x805e0cd0;
    r0 = *(0xa6 + r31); // lbz @ 0x805E0CA4
    /* clrlwi. r0, r0, 0x1f */ // 0x805E0CA8
    if (==) goto 0x0x805e0cc4;
    r3 = *(8 + r1); // lwz @ 0x805E0CB0
    r0 = *(0xb4 + r31); // lwz @ 0x805E0CB4
    r30 = *(0 + r3); // lwz @ 0x805E0CB8
    *(8 + r1) = r0; // stw @ 0x805E0CBC
    /* b 0x805e0ce4 */ // 0x805E0CC0
    r3 = r27 + 0; // 0x805E0CC4
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x805e0ce4 */ // 0x805E0CCC
    r3 = *(8 + r1); // lwz @ 0x805E0CD0
    r4 = *(0 + r3); // lwz @ 0x805E0CD4
    r0 = r3 + r30; // 0x805E0CD8
    *(8 + r1) = r0; // stw @ 0x805E0CDC
    r30 = r4;
    r29 = r29 + 1; // 0x805E0CE4
}