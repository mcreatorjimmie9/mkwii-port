/* Function at 0x80665A10, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80665A10(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80665A24
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x80665A2C
    r3 = *(0 + r5); // lwz @ 0x80665A30
    r0 = *(0xbb + r3); // lbz @ 0x80665A34
    /* clrlwi. r0, r0, 0x1f */ // 0x80665A38
    if (!=) goto 0x0x80665a48;
    /* li r3, 0 */ // 0x80665A40
    /* b 0x80665b00 */ // 0x80665A44
    r3 = *(0xc + r3); // lwz @ 0x80665A48
    if (!=) goto 0x0x80665a5c;
    /* li r3, 1 */ // 0x80665A54
    /* b 0x80665b00 */ // 0x80665A58
    r0 = *(0xbb + r3); // lbz @ 0x80665A5C
    /* clrlwi. r0, r0, 0x1f */ // 0x80665A60
    if (!=) goto 0x0x80665a70;
    /* li r3, 0 */ // 0x80665A68
    /* b 0x80665b00 */ // 0x80665A6C
    r3 = *(0xc + r3); // lwz @ 0x80665A70
    if (!=) goto 0x0x80665a84;
    /* li r3, 1 */ // 0x80665A7C
    /* b 0x80665b00 */ // 0x80665A80
    r0 = *(0xbb + r3); // lbz @ 0x80665A84
    /* clrlwi. r0, r0, 0x1f */ // 0x80665A88
    if (!=) goto 0x0x80665a98;
    /* li r3, 0 */ // 0x80665A90
    /* b 0x80665b00 */ // 0x80665A94
    r3 = *(0xc + r3); // lwz @ 0x80665A98
    if (!=) goto 0x0x80665aac;
    /* li r3, 1 */ // 0x80665AA4
    /* b 0x80665b00 */ // 0x80665AA8
    r0 = *(0xbb + r3); // lbz @ 0x80665AAC
    /* clrlwi. r0, r0, 0x1f */ // 0x80665AB0
    if (!=) goto 0x0x80665ac0;
    /* li r3, 0 */ // 0x80665AB8
    /* b 0x80665b00 */ // 0x80665ABC
    r3 = *(0xc + r3); // lwz @ 0x80665AC0
    if (!=) goto 0x0x80665ad4;
    /* li r3, 1 */ // 0x80665ACC
    /* b 0x80665b00 */ // 0x80665AD0
    r0 = *(0xbb + r3); // lbz @ 0x80665AD4
    /* clrlwi. r0, r0, 0x1f */ // 0x80665AD8
    if (!=) goto 0x0x80665ae8;
    /* li r3, 0 */ // 0x80665AE0
    /* b 0x80665b00 */ // 0x80665AE4
    r3 = *(0xc + r3); // lwz @ 0x80665AE8
    if (!=) goto 0x0x80665afc;
    /* li r3, 1 */ // 0x80665AF4
    /* b 0x80665b00 */ // 0x80665AF8
    FUN_806650B4(r3); // bl 0x806650B4
    if (==) goto 0x0x80665b14;
    r3 = *(8 + r30); // lwz @ 0x80665B08
    r4 = r31;
    FUN_80656388(r4); // bl 0x80656388
    r0 = *(0x14 + r1); // lwz @ 0x80665B14
    r31 = *(0xc + r1); // lwz @ 0x80665B18
    r30 = *(8 + r1); // lwz @ 0x80665B1C
    return;
}