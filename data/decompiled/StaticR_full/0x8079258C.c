/* Function at 0x8079258C, size=220 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8079258C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x807925A4
    r29 = r3;
    r3 = r3 + 0x88; // 0x807925AC
    FUN_8078FFE0(r3); // bl 0x8078FFE0
    if (==) goto 0x0x807925c4;
    /* li r3, 0 */ // 0x807925BC
    /* b 0x80792654 */ // 0x807925C0
    r3 = *(0x80 + r29); // lwz @ 0x807925C4
    if (!=) goto 0x0x807925d8;
    r31 = r29 + 0x80; // 0x807925D0
    /* b 0x8079262c */ // 0x807925D4
    if (==) goto 0x0x807925e4;
    r0 = *(0x90 + r3); // lwz @ 0x807925DC
    /* b 0x807925e8 */ // 0x807925E0
    /* li r0, -1 */ // 0x807925E4
    *(8 + r1) = r0; // stw @ 0x807925E8
    r4 = r30;
    r3 = r29 + 0x88; // 0x807925F0
    /* li r6, 1 */ // 0x807925F8
    FUN_8078FF44(r4, r3, r5, r6); // bl 0x8078FF44
    if (>=) goto 0x0x80792610;
    /* li r31, 0 */ // 0x80792608
    /* b 0x8079262c */ // 0x8079260C
    /* slwi r0, r3, 2 */ // 0x80792610
    r31 = r29 + r0; // 0x80792614
    r3 = *(0x80 + r31); // lwzu @ 0x80792618
    if (==) goto 0x0x8079262c;
    /* li r4, 0 */ // 0x80792624
    FUN_805E3430(r4); // bl 0x805E3430
    if (==) goto 0x0x80792650;
    r3 = r29;
    r4 = r31;
    r5 = r30;
    /* li r6, 0 */ // 0x80792640
    FUN_805E3430(r3, r4, r5, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x80792654 */ // 0x8079264C
    /* li r3, 0 */ // 0x80792650
    r0 = *(0x24 + r1); // lwz @ 0x80792654
    r31 = *(0x1c + r1); // lwz @ 0x80792658
    r30 = *(0x18 + r1); // lwz @ 0x8079265C
    r29 = *(0x14 + r1); // lwz @ 0x80792660
}