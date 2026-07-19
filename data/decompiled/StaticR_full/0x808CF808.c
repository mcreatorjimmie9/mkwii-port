/* Function at 0x808CF808, size=40 bytes */
/* Stack frame: 0 bytes */

void FUN_808CF808(int r3, int r4)
{
    if (>) goto 0x0x808cf868;
    /* lis r4, 0 */ // 0x808CF810
    /* slwi r0, r3, 2 */ // 0x808CF814
    r4 = r4 + 0; // 0x808CF818
    /* lwzx r4, r4, r0 */ // 0x808CF81C
    /* mtctr r4 */ // 0x808CF820
    /* bctr  */ // 0x808CF824
    /* li r3, 0 */ // 0x808CF828
    return;
}