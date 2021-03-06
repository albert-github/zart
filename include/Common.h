/** -*- mode: c++ ; c-basic-offset: 2 -*-
 * @file   Common.h
 * @author Sebastien Fourey
 * @date   July 2010
 * @brief  Global declarations/definitions
 *
 * This file is part of the ZArt software's source code.
 *
 * Copyright Sebastien Fourey / GREYC Ensicaen (2010-...)
 *
 *                    https://foureys.users.greyc.fr/
 *
 * This software is a computer program whose purpose is to demonstrate
 * the possibilities of the GMIC image processing language by offering the
 * choice of several manipulations on a video stream acquired from a webcam. In
 * other words, ZArt is a GUI for G'MIC real-time manipulations on the output
 * of a webcam.
 *
 * This software is governed by the CeCILL  license under French law and
 * abiding by the rules of distribution of free software.  You can  use,
 * modify and/ or redistribute the software under the terms of the CeCILL
 * license as circulated by CEA, CNRS and INRIA at the following URL
 * "http://www.cecill.info". See also the directory "Licence" which comes
 * with this source code for the full text of the CeCILL license.
 *
 * As a counterpart to the access to the source code and  rights to copy,
 * modify and redistribute granted by the license, users are provided only
 * with a limited warranty  and the software's author,  the holder of the
 * economic rights,  and the successive licensors  have only  limited
 * liability.
 *
 * In this respect, the user's attention is drawn to the risks associated
 * with loading,  using,  modifying and/or developing or reproducing the
 * software by the user in light of its specific status of free software,
 * that may mean  that it is complicated to manipulate,  and  that  also
 * therefore means  that it is reserved for developers  and  experienced
 * professionals having in-depth computer knowledge. Users are therefore
 * encouraged to load and test the software's suitability as regards their
 * requirements in conditions enabling the security of their systems and/or
 * data to be ensured and,  more generally, to use and operate it in the
 * same conditions as regards security.
 *
 * The fact that you are presently reading this means that you have had
 * knowledge of the CeCILL license and that you accept its terms.
 *
 */
#ifndef ZART_COMMON_H
#define ZART_COMMON_H

#include <QDebug>
#include <iostream>

#ifdef _ZART_DEBUG_
#define ENTERING qWarning() << "[" << __PRETTY_FUNCTION__ << "] <<Entering>>"
#define LEAVING qWarning() << "[" << __PRETTY_FUNCTION__ << "] <<Leaving>>"
#define TSHOW(V) qWarning() << "[" << __PRETTY_FUNCTION__ << "]" << #V << "=" << (V)
#define TRACE qWarning() << "[" << __PRETTY_FUNCTION__ << "]"
#define SHOW(V) qWarning() << #V << "=" << (V)
#else
#define ENTERING while (false)
#define TSHOW(V)                                                                                                                                                                                       \
  while (false)                                                                                                                                                                                        \
  qWarning() << ""
#define SHOW(V)                                                                                                                                                                                        \
  while (false)                                                                                                                                                                                        \
  qWarning() << ""
#define TRACE                                                                                                                                                                                          \
  while (false)                                                                                                                                                                                        \
  qWarning() << ""
#endif

#define ZART_VERSION 3.2.2

#define ZART_STRINGIFY(X) #X
#define ZART_XSTRINGIFY(X) ZART_STRINGIFY(X)
#define ZART_VERSION_STRING ZART_XSTRINGIFY(ZART_VERSION)

#define QT_VERSION_GTE(MAJOR, MINOR) (((QT_VERSION_MAJOR == MAJOR) && (QT_VERSION_MINOR >= MINOR)) || (QT_VERSION_MAJOR > MAJOR))


#endif // ZART_COMMON_H
