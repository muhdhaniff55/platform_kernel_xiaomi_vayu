
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 * SPDX-License-Identifier: ISC
 */

 

 
 
 
 
 
 
 
 


#ifndef _MON_DESTINATION_RING_H_
#define _MON_DESTINATION_RING_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_MON_DESTINATION_RING 4


struct mon_destination_ring {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t stat_buf_virt_addr_31_0                                 : 32;  
             uint32_t stat_buf_virt_addr_63_32                                : 32;  
             uint32_t ppdu_id                                                 : 32;  
             uint32_t end_offset                                              : 12,  
                      reserved_3a                                             :  4,  
                      end_reason                                              :  2,  
                      initiator                                               :  1,  
                      empty_descriptor                                        :  1,  
                      ring_id                                                 :  8,  
                      looping_count                                           :  4;  
#else
             uint32_t stat_buf_virt_addr_31_0                                 : 32;  
             uint32_t stat_buf_virt_addr_63_32                                : 32;  
             uint32_t ppdu_id                                                 : 32;  
             uint32_t looping_count                                           :  4,  
                      ring_id                                                 :  8,  
                      empty_descriptor                                        :  1,  
                      initiator                                               :  1,  
                      end_reason                                              :  2,  
                      reserved_3a                                             :  4,  
                      end_offset                                              : 12;  
#endif
};


 

#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_31_0_OFFSET                         0x00000000
#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_31_0_LSB                            0
#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_31_0_MSB                            31
#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_31_0_MASK                           0xffffffff


 

#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_63_32_OFFSET                        0x00000004
#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_63_32_LSB                           0
#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_63_32_MSB                           31
#define MON_DESTINATION_RING_STAT_BUF_VIRT_ADDR_63_32_MASK                          0xffffffff


 

#define MON_DESTINATION_RING_PPDU_ID_OFFSET                                         0x00000008
#define MON_DESTINATION_RING_PPDU_ID_LSB                                            0
#define MON_DESTINATION_RING_PPDU_ID_MSB                                            31
#define MON_DESTINATION_RING_PPDU_ID_MASK                                           0xffffffff


 

#define MON_DESTINATION_RING_END_OFFSET_OFFSET                                      0x0000000c
#define MON_DESTINATION_RING_END_OFFSET_LSB                                         0
#define MON_DESTINATION_RING_END_OFFSET_MSB                                         11
#define MON_DESTINATION_RING_END_OFFSET_MASK                                        0x00000fff


 

#define MON_DESTINATION_RING_RESERVED_3A_OFFSET                                     0x0000000c
#define MON_DESTINATION_RING_RESERVED_3A_LSB                                        12
#define MON_DESTINATION_RING_RESERVED_3A_MSB                                        15
#define MON_DESTINATION_RING_RESERVED_3A_MASK                                       0x0000f000


 

#define MON_DESTINATION_RING_END_REASON_OFFSET                                      0x0000000c
#define MON_DESTINATION_RING_END_REASON_LSB                                         16
#define MON_DESTINATION_RING_END_REASON_MSB                                         17
#define MON_DESTINATION_RING_END_REASON_MASK                                        0x00030000


 

#define MON_DESTINATION_RING_INITIATOR_OFFSET                                       0x0000000c
#define MON_DESTINATION_RING_INITIATOR_LSB                                          18
#define MON_DESTINATION_RING_INITIATOR_MSB                                          18
#define MON_DESTINATION_RING_INITIATOR_MASK                                         0x00040000


 

#define MON_DESTINATION_RING_EMPTY_DESCRIPTOR_OFFSET                                0x0000000c
#define MON_DESTINATION_RING_EMPTY_DESCRIPTOR_LSB                                   19
#define MON_DESTINATION_RING_EMPTY_DESCRIPTOR_MSB                                   19
#define MON_DESTINATION_RING_EMPTY_DESCRIPTOR_MASK                                  0x00080000


 

#define MON_DESTINATION_RING_RING_ID_OFFSET                                         0x0000000c
#define MON_DESTINATION_RING_RING_ID_LSB                                            20
#define MON_DESTINATION_RING_RING_ID_MSB                                            27
#define MON_DESTINATION_RING_RING_ID_MASK                                           0x0ff00000


 

#define MON_DESTINATION_RING_LOOPING_COUNT_OFFSET                                   0x0000000c
#define MON_DESTINATION_RING_LOOPING_COUNT_LSB                                      28
#define MON_DESTINATION_RING_LOOPING_COUNT_MSB                                      31
#define MON_DESTINATION_RING_LOOPING_COUNT_MASK                                     0xf0000000



#endif    
