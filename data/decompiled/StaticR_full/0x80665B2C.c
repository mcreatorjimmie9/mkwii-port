/* Function at 0x80665B2C, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80665B2C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80665B40
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x80665B48
    r3 = *(0 + r5); // lwz @ 0x80665B4C
    r0 = *(0xbb + r3); // lbz @ 0x80665B50
    /* clrlwi. r0, r0, 0x1f */ // 0x80665B54
    if (!=) goto 0x0x80665b64;
    /* li r3, 0 */ // 0x80665B5C
    /* b 0x80665c1c */ // 0x80665B60
    r3 = *(0xc + r3); // lwz @ 0x80665B64
    if (!=) goto 0x0x80665b78;
    /* li r3, 1 */ // 0x80665B70
    /* b 0x80665c1c */ // 0x80665B74
    r0 = *(0xbb + r3); // lbz @ 0x80665B78
    /* clrlwi. r0, r0, 0x1f */ // 0x80665B7C
    if (!=) goto 0x0x80665b8c;
    /* li r3, 0 */ // 0x80665B84
    /* b 0x80665c1c */ // 0x80665B88
    r3 = *(0xc + r3); // lwz @ 0x80665B8C
    if (!=) goto 0x0x80665ba0;
    /* li r3, 1 */ // 0x80665B98
    /* b 0x80665c1c */ // 0x80665B9C
    r0 = *(0xbb + r3); // lbz @ 0x80665BA0
    /* clrlwi. r0, r0, 0x1f */ // 0x80665BA4
    if (!=) goto 0x0x80665bb4;
    /* li r3, 0 */ // 0x80665BAC
    /* b 0x80665c1c */ // 0x80665BB0
    r3 = *(0xc + r3); // lwz @ 0x80665BB4
    if (!=) goto 0x0x80665bc8;
    /* li r3, 1 */ // 0x80665BC0
    /* b 0x80665c1c */ // 0x80665BC4
    r0 = *(0xbb + r3); // lbz @ 0x80665BC8
    /* clrlwi. r0, r0, 0x1f */ // 0x80665BCC
    if (!=) goto 0x0x80665bdc;
    /* li r3, 0 */ // 0x80665BD4
    /* b 0x80665c1c */ // 0x80665BD8
    r3 = *(0xc + r3); // lwz @ 0x80665BDC
    if (!=) goto 0x0x80665bf0;
    /* li r3, 1 */ // 0x80665BE8
    /* b 0x80665c1c */ // 0x80665BEC
    r0 = *(0xbb + r3); // lbz @ 0x80665BF0
    /* clrlwi. r0, r0, 0x1f */ // 0x80665BF4
    if (!=) goto 0x0x80665c04;
    /* li r3, 0 */ // 0x80665BFC
    /* b 0x80665c1c */ // 0x80665C00
    r3 = *(0xc + r3); // lwz @ 0x80665C04
    if (!=) goto 0x0x80665c18;
    /* li r3, 1 */ // 0x80665C10
    /* b 0x80665c1c */ // 0x80665C14
    FUN_806650B4(r3); // bl 0x806650B4
    if (==) goto 0x0x80665c30;
    r3 = *(8 + r30); // lwz @ 0x80665C24
    r4 = r31;
    FUN_8066F0B8(r4); // bl 0x8066F0B8
    r0 = *(0x14 + r1); // lwz @ 0x80665C30
    r31 = *(0xc + r1); // lwz @ 0x80665C34
    r30 = *(8 + r1); // lwz @ 0x80665C38
    return;
}