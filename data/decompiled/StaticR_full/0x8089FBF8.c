/* Function at 0x8089FBF8, size=268 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8089FBF8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r3 = r4;
    *(0xc + r1) = r31; // stw @ 0x8089FC08
    r31 = r6;
    *(8 + r1) = r30; // stw @ 0x8089FC10
    r30 = r5;
    FUN_8061E63C(); // bl 0x8061E63C
    /* lis r3, 0 */ // 0x8089FC1C
    /* lfs f0, 0(r3) */ // 0x8089FC20
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x8089FC24
    if (>=) goto 0x0x8089fc5c;
    r0 = *(0 + r30); // lwz @ 0x8089FC2C
    if (==) goto 0x0x8089fc44;
    if (==) goto 0x0x8089fc50;
    /* b 0x8089fc70 */ // 0x8089FC40
    /* li r0, 8 */ // 0x8089FC44
    *(0 + r30) = r0; // stw @ 0x8089FC48
    /* b 0x8089fc70 */ // 0x8089FC4C
    /* li r0, 0 */ // 0x8089FC50
    *(0 + r30) = r0; // stw @ 0x8089FC54
    /* b 0x8089fc70 */ // 0x8089FC58
    r0 = *(0 + r30); // lwz @ 0x8089FC5C
    if (!=) goto 0x0x8089fc70;
    /* li r0, 0xa */ // 0x8089FC68
    *(0 + r30) = r0; // stw @ 0x8089FC6C
    /* lis r3, 0 */ // 0x8089FC70
    r3 = *(0 + r3); // lwz @ 0x8089FC74
    r0 = *(0x54 + r3); // lbz @ 0x8089FC78
    if (!=) goto 0x0x8089fcc0;
    r0 = *(0x55 + r3); // lbz @ 0x8089FC84
    if (!=) goto 0x0x8089fcc0;
    r0 = *(0 + r31); // lwz @ 0x8089FC90
    if (==) goto 0x0x8089fca8;
    if (==) goto 0x0x8089fcb4;
    /* b 0x8089fcec */ // 0x8089FCA4
    /* li r0, 3 */ // 0x8089FCA8
    *(0 + r31) = r0; // stw @ 0x8089FCAC
    /* b 0x8089fcec */ // 0x8089FCB0
    /* li r0, 4 */ // 0x8089FCB4
    *(0 + r31) = r0; // stw @ 0x8089FCB8
    /* b 0x8089fcec */ // 0x8089FCBC
    r0 = *(0 + r31); // lwz @ 0x8089FCC0
    if (==) goto 0x0x8089fcd8;
    if (==) goto 0x0x8089fce4;
    /* b 0x8089fcec */ // 0x8089FCD4
    /* li r0, 0 */ // 0x8089FCD8
    *(0 + r31) = r0; // stw @ 0x8089FCDC
    /* b 0x8089fcec */ // 0x8089FCE0
    /* li r0, 0 */ // 0x8089FCE4
    *(0 + r31) = r0; // stw @ 0x8089FCE8
    r0 = *(0x14 + r1); // lwz @ 0x8089FCEC
    r31 = *(0xc + r1); // lwz @ 0x8089FCF0
    r30 = *(8 + r1); // lwz @ 0x8089FCF4
    return;
}