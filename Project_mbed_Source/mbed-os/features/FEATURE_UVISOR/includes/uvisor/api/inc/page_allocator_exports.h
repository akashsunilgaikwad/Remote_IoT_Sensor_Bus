/*
 * Copyright (c) 2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef __UVISOR_API_PAGE_ALLOCATOR_EXPORTS_H__
#define __UVISOR_API_PAGE_ALLOCATOR_EXPORTS_H__

#include "api/inc/halt_exports.h"
#include <stdint.h>
#include <stddef.h>


#define UVISOR_ERROR_PAGE_OK                    (0)
#define UVISOR_ERROR_PAGE_OUT_OF_MEMORY         (UVISOR_ERROR_CLASS_PAGE + 1)
#define UVISOR_ERROR_PAGE_INVALID_PAGE_TABLE    (UVISOR_ERROR_CLASS_PAGE + 2)
#define UVISOR_ERROR_PAGE_INVALID_PAGE_SIZE     (UVISOR_ERROR_CLASS_PAGE + 3)
#define UVISOR_ERROR_PAGE_INVALID_PAGE_ORIGIN   (UVISOR_ERROR_CLASS_PAGE + 4)
#define UVISOR_ERROR_PAGE_INVALID_PAGE_OWNER    (UVISOR_ERROR_CLASS_PAGE + 5)
#define UVISOR_ERROR_PAGE_INVALID_PAGE_COUNT    (UVISOR_ERROR_CLASS_PAGE + 6)


/* Must be a power of 2 for MPU alignment in ARMv7-M with ARM MPU.
 * Must be multiple of 32 for K64F MPU. */
#ifndef UVISOR_PAGE_SIZE
#define UVISOR_PAGE_SIZE ((uint32_t) 16 * 1024)
#endif

/* Return the rounded up number of pages required to hold `size`. */
#define UVISOR_PAGES_FOR_SIZE(size) ((size + UVISOR_PAGE_SIZE - 1) / UVISOR_PAGE_SIZE)

/* Create a page table with `count` many entries. */
#define UVISOR_PAGE_TABLE(count) \
    struct { \
        uint32_t page_size; \
        uint32_t page_count; \
        void * page_origins[count]; \
    }

/* Create a page table with enough pages to hold `size`. */
#define UVISOR_PAGE_TABLE_FOR_SIZE(size) UVISOR_PAGE_TABLE(UVISOR_PAGES_FOR_SIZE(size))


typedef struct {
    uint32_t page_size;     /* The page size in bytes. Must be multiple of `UVISOR_PAGE_SIZE`! */
    uint32_t page_count;    /* The number of pages in the page table. */
    void * page_origins[1]; /* Table of pointers to the origin of each page. */
} UvisorPageTable;

#endif /* __UVISOR_API_PAGE_ALLOCATOR_EXPORTS_H__ */
