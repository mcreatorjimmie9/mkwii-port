/* Function at 0x8085ACC0, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_8085ACC0(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x8085ACD4
    *(0x14 + r1) = r29; // stw @ 0x8085ACD8
    /* li r29, 0 */ // 0x8085ACDC
    *(0x10 + r1) = r28; // stw @ 0x8085ACE0
    r28 = r3;
    r0 = *(0 + r28); // lwz @ 0x8085ACE8
    /* li r4, 1 */ // 0x8085ACEC
    r3 = r0 + r30; // 0x8085ACF0
    r3 = *(0x14 + r3); // lwz @ 0x8085ACF4
    r0 = *(4 + r3); // lwz @ 0x8085ACF8
    if (==) goto 0x0x8085ad10;
    if (==) goto 0x0x8085ad10;
    /* li r4, 0 */ // 0x8085AD0C
    if (==) goto 0x0x8085ad20;
    r31 = *(0 + r3); // lwz @ 0x8085AD18
    /* b 0x8085ad24 */ // 0x8085AD1C
    /* li r31, 0 */ // 0x8085AD20
    r0 = *(0x90 + r28); // lwz @ 0x8085AD24
    r3 = *(0x84 + r28); // lwz @ 0x8085AD2C
    r4 = r28;
    /* slwi r0, r0, 2 */ // 0x8085AD34
    /* lwzx r0, r3, r0 */ // 0x8085AD38
    *(0x122 + r31) = r0; // sth @ 0x8085AD3C
    if (==) goto 0x0x8085ad48;
    r4 = r28 + 8; // 0x8085AD44
    *(0x11c + r31) = r4; // stw @ 0x8085AD48
    r3 = r31;
    /* li r4, 1 */ // 0x8085AD50
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
}