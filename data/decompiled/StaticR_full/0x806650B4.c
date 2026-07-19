/* Function at 0x806650B4, size=248 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_806650B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r0 = *(0xbb + r3); // lbz @ 0x806650C0
    *(0xc + r1) = r31; // stw @ 0x806650C4
    /* clrlwi. r0, r0, 0x1f */ // 0x806650C8
    if (!=) goto 0x0x806650d8;
    /* li r3, 0 */ // 0x806650D0
    /* b 0x80665198 */ // 0x806650D4
    r3 = *(0xc + r3); // lwz @ 0x806650D8
    if (!=) goto 0x0x806650ec;
    /* li r3, 1 */ // 0x806650E4
    /* b 0x80665198 */ // 0x806650E8
    r0 = *(0xbb + r3); // lbz @ 0x806650EC
    /* clrlwi. r0, r0, 0x1f */ // 0x806650F0
    if (!=) goto 0x0x80665100;
    /* li r3, 0 */ // 0x806650F8
    /* b 0x80665198 */ // 0x806650FC
    r3 = *(0xc + r3); // lwz @ 0x80665100
    if (!=) goto 0x0x80665114;
    /* li r3, 1 */ // 0x8066510C
    /* b 0x80665198 */ // 0x80665110
    r0 = *(0xbb + r3); // lbz @ 0x80665114
    /* clrlwi. r0, r0, 0x1f */ // 0x80665118
    if (!=) goto 0x0x80665128;
    /* li r3, 0 */ // 0x80665120
    /* b 0x80665198 */ // 0x80665124
    r3 = *(0xc + r3); // lwz @ 0x80665128
    if (!=) goto 0x0x8066513c;
    /* li r3, 1 */ // 0x80665134
    /* b 0x80665198 */ // 0x80665138
    r0 = *(0xbb + r3); // lbz @ 0x8066513C
    /* clrlwi. r0, r0, 0x1f */ // 0x80665140
    if (!=) goto 0x0x80665150;
    /* li r3, 0 */ // 0x80665148
    /* b 0x80665198 */ // 0x8066514C
    r31 = *(0xc + r3); // lwz @ 0x80665150
    if (!=) goto 0x0x80665164;
    /* li r3, 1 */ // 0x8066515C
    /* b 0x80665198 */ // 0x80665160
    r3 = r31;
    FUN_806651AC(r3, r3); // bl 0x806651AC
    if (!=) goto 0x0x8066517c;
    /* li r3, 0 */ // 0x80665174
    /* b 0x80665198 */ // 0x80665178
    r3 = r31;
    FUN_80664EAC(r3, r3); // bl 0x80664EAC
    if (!=) goto 0x0x80665194;
    /* li r3, 1 */ // 0x8066518C
    /* b 0x80665198 */ // 0x80665190
    FUN_806650B4(r3); // bl 0x806650B4
    r0 = *(0x14 + r1); // lwz @ 0x80665198
    r31 = *(0xc + r1); // lwz @ 0x8066519C
    return;
}