/* Function at 0x808AF914, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_808AF914(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808AF924
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808AF92C
    r30 = r3;
    if (>=) goto 0x0x808af940;
    /* li r3, 0x270f */ // 0x808AF938
    /* b 0x808af9a4 */ // 0x808AF93C
    FUN_805B7218(r3); // bl 0x805B7218
    if (!=) goto 0x0x808af954;
    r3 = r30 + 0x2328; // 0x808AF94C
    /* b 0x808af9a4 */ // 0x808AF950
    r0 = r30 + -0x18; // 0x808AF954
    if (>) goto 0x0x808af9a0;
    /* lis r3, 0 */ // 0x808AF960
    /* slwi r0, r0, 2 */ // 0x808AF964
    r3 = r3 + 0; // 0x808AF968
    /* lwzx r3, r3, r0 */ // 0x808AF96C
    /* mtctr r3 */ // 0x808AF970
    /* bctr  */ // 0x808AF974
    /* li r3, 0x235c */ // 0x808AF97C
    if (==) goto 0x0x808af9a4;
    /* li r3, 0x235a */ // 0x808AF984
    /* b 0x808af9a4 */ // 0x808AF988
    /* li r3, 0x235d */ // 0x808AF990
}